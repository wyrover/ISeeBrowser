// Copyright (c) 2008, Google Inc.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// 
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "config.h"
#include "Path.h"
#include "FloatRect.h"
#include "AffineTransform.h"

#include "SkPath.h"
#include "SkRegion.h"

#include "SkiaUtils.h"

namespace WebCore {

Path::Path()
{
    m_path = new SkPath;
}

Path::Path(const Path& other)
{
    m_path = new SkPath(*other.m_path);
    m_rule = other.m_rule;
}

Path::~Path()
{
    delete m_path;
}

Path& Path::operator=(const Path& other)
{
    *m_path = *other.m_path;
    return *this;
}

bool Path::isEmpty() const
{
    return m_path->isEmpty();
}

bool Path::contains(const FloatPoint& point, WindRule rule) const
{
    return SkPathContainsPoint(
      m_path,
      point, 
      rule == RULE_NONZERO ? SkPath::kWinding_FillType : SkPath::kEvenOdd_FillType);
}

void Path::translate(const FloatSize& size)
{
    m_path->offset(WebCoreFloatToSkScalar(size.width()), WebCoreFloatToSkScalar(size.height()));
}

FloatRect Path::boundingRect() const
{
    SkRect  r;
    
    m_path->computeBounds(&r, SkPath::kExact_BoundsType);
    return FloatRect(   SkScalarToFloat(r.fLeft),
                        SkScalarToFloat(r.fTop),
                        SkScalarToFloat(r.width()),
                        SkScalarToFloat(r.height()));
}

void Path::moveTo(const FloatPoint& point)
{
    m_path->moveTo(WebCoreFloatToSkScalar(point.x()), WebCoreFloatToSkScalar(point.y()));
}

void Path::addLineTo(const FloatPoint& p)
{
    m_path->lineTo(WebCoreFloatToSkScalar(p.x()), WebCoreFloatToSkScalar(p.y()));
}

void Path::addQuadCurveTo(const FloatPoint& cp, const FloatPoint& ep)
{
    m_path->quadTo(WebCoreFloatToSkScalar(cp.x()), WebCoreFloatToSkScalar(cp.y()),
                            WebCoreFloatToSkScalar(ep.x()), WebCoreFloatToSkScalar(ep.y()));
}

void Path::addBezierCurveTo(const FloatPoint& p1, const FloatPoint& p2, const FloatPoint& ep)
{
    m_path->cubicTo(WebCoreFloatToSkScalar(p1.x()), WebCoreFloatToSkScalar(p1.y()),
                             WebCoreFloatToSkScalar(p2.x()), WebCoreFloatToSkScalar(p2.y()),
                             WebCoreFloatToSkScalar(ep.x()), WebCoreFloatToSkScalar(ep.y()));
}

void Path::addArcTo(const FloatPoint& p1, const FloatPoint& p2, float radius)
{
    m_path->arcTo(WebCoreFloatToSkScalar(p1.x()), WebCoreFloatToSkScalar(p1.y()),
                           WebCoreFloatToSkScalar(p2.x()), WebCoreFloatToSkScalar(p2.y()),
                           WebCoreFloatToSkScalar(radius));
}

void Path::closeSubpath()
{
    m_path->close();
}

static const float gPI = 3.1415926f;

void Path::addArc(const FloatPoint& p, float r, float sa, float ea,
                  bool anticlockwise) {
    SkScalar    cx = WebCoreFloatToSkScalar(p.x());
    SkScalar    cy = WebCoreFloatToSkScalar(p.y());
    SkScalar    radius = WebCoreFloatToSkScalar(r);

    SkRect  oval;
    oval.set(cx - radius, cy - radius, cx + radius, cy + radius);
    
    float sweep = ea - sa;
    // check for a circle
    if (sweep >= 2*gPI || sweep <= -2*gPI) {
        m_path->addOval(oval);
    } else {
        SkScalar startDegrees = WebCoreFloatToSkScalar(sa * 180 / gPI);
        SkScalar sweepDegrees = WebCoreFloatToSkScalar(sweep * 180 / gPI);

        if (anticlockwise && sweepDegrees > 0) {
            sweepDegrees -= SkIntToScalar(360);
        } else if (!anticlockwise && sweepDegrees < 0) {
            sweepDegrees = SkIntToScalar(360) - sweepDegrees;
        }

//        SkDebugf("addArc sa=%g ea=%g cw=%d start=%g sweep=%g\n", sa, ea, clockwise,
//                 SkScalarToFloat(startDegrees), SkScalarToFloat(sweepDegrees));

        m_path->arcTo(oval, startDegrees, sweepDegrees, false);
    }
}

void Path::addRect(const FloatRect& rect)
{
    SkRect r;
    WebCoreRectToSkiaRect(rect, &r);
    m_path->addRect(r);
}

void Path::addEllipse(const FloatRect& rect)
{
    SkRect r;
    WebCoreRectToSkiaRect(rect, &r);
    m_path->addOval(r);
}

void Path::clear()
{
    m_path->reset();
}

static FloatPoint* setfpts(FloatPoint dst[], const SkPoint src[], int count)
{
    for (int i = 0; i < count; i++)
    {
        dst[i].setX(SkScalarToFloat(src[i].fX));
        dst[i].setY(SkScalarToFloat(src[i].fY));
    }
    return dst;
}

void Path::apply(void* info, PathApplierFunction function) const
{
    SkPath::Iter    iter(*m_path, false);
    SkPoint         pts[4];
    
    PathElement     elem;
    FloatPoint      fpts[3];

    for (;;)
    {
        switch (iter.next(pts)) {
        case SkPath::kMove_Verb:
            elem.type = PathElementMoveToPoint;
            elem.points = setfpts(fpts, &pts[0], 1);
            break;
        case SkPath::kLine_Verb:
            elem.type = PathElementAddLineToPoint;
            elem.points = setfpts(fpts, &pts[1], 1);
            break;
        case SkPath::kQuad_Verb:
            elem.type = PathElementAddQuadCurveToPoint;
            elem.points = setfpts(fpts, &pts[1], 2);
            break;
        case SkPath::kCubic_Verb:
            elem.type = PathElementAddCurveToPoint;
            elem.points = setfpts(fpts, &pts[1], 3);
            break;
        case SkPath::kClose_Verb:
            elem.type = PathElementCloseSubpath;
            elem.points = setfpts(fpts, NULL, 0);
            break;
        case SkPath::kDone_Verb:
            return;
        }
        function(info, &elem);
    }
}

void Path::transform(const AffineTransform& xform)
{
    m_path->transform(xform);
}

String Path::debugString() const
{
    String result;

    SkPath::Iter    iter(*m_path, false);
    SkPoint         pts[4];

    int             numPoints = m_path->getPoints(NULL, 0);
    SkPath::Verb    verb;

    do {
        verb = iter.next(pts);
        switch (verb) {
        case SkPath::kMove_Verb:
            result += String::format("M%.2f,%.2f", pts[0].fX, pts[0].fY);
            numPoints -= 1;
            break;
        case SkPath::kLine_Verb:
          if (!iter.isCloseLine()) {
                result += String::format("L%.2f,%.2f", pts[1].fX, pts[1].fY); 
                numPoints -= 1;
            }
            break;
        case SkPath::kQuad_Verb:
            result += String::format("Q%.2f,%.2f,%.2f,%.2f",
                pts[1].fX, pts[1].fY,
                pts[2].fX, pts[2].fY);
            numPoints -= 2;
            break;
        case SkPath::kCubic_Verb:
            result += String::format("C%.2f,%.2f,%.2f,%.2f,%.2f,%.2f",
                pts[1].fX, pts[1].fY,
                pts[2].fX, pts[2].fY,
                pts[3].fX, pts[3].fY);
            numPoints -= 3;
            break;
        case SkPath::kClose_Verb:
            break;
        case SkPath::kDone_Verb:
            break;
        }
    } while (verb != SkPath::kDone_Verb);

    // If you have a path that ends with an M, Skia will not iterate the
    // trailing M. That's nice of it, but Apple's paths output the trailing M
    // and we want out layout dumps to look like theirs
    if (numPoints) {
        ASSERT(numPoints==1);
        m_path->getLastPt(pts);
        result += String::format("M%.2f,%.2f", pts[0].fX, pts[0].fY);
    }

    return result;
}

}
