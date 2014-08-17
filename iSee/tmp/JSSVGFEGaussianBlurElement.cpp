/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEGaussianBlurElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEGaussianBlurElement.h"

#include <kjs/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEGaussianBlurElement)

/* Hash table */

static const HashTableValue JSSVGFEGaussianBlurElementTableValues[11] =
{
    { "in1", (intptr_t)JSSVGFEGaussianBlurElement::In1AttrNum, DontDelete|ReadOnly, 0 },
    { "stdDeviationX", (intptr_t)JSSVGFEGaussianBlurElement::StdDeviationXAttrNum, DontDelete|ReadOnly, 0 },
    { "stdDeviationY", (intptr_t)JSSVGFEGaussianBlurElement::StdDeviationYAttrNum, DontDelete|ReadOnly, 0 },
    { "x", (intptr_t)JSSVGFEGaussianBlurElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGFEGaussianBlurElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "width", (intptr_t)JSSVGFEGaussianBlurElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSSVGFEGaussianBlurElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "result", (intptr_t)JSSVGFEGaussianBlurElement::ResultAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGFEGaussianBlurElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGFEGaussianBlurElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEGaussianBlurElementTable = { 255, JSSVGFEGaussianBlurElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGFEGaussianBlurElementPrototypeTableValues[3] =
{
    { "setStdDeviation", (intptr_t)jsSVGFEGaussianBlurElementPrototypeFunctionSetStdDeviation, DontDelete|Function, 2 },
    { "getPresentationAttribute", (intptr_t)jsSVGFEGaussianBlurElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEGaussianBlurElementPrototypeTable = { 1, JSSVGFEGaussianBlurElementPrototypeTableValues, 0 };

const ClassInfo JSSVGFEGaussianBlurElementPrototype::s_info = { "SVGFEGaussianBlurElementPrototype", 0, &JSSVGFEGaussianBlurElementPrototypeTable, 0 };

JSObject* JSSVGFEGaussianBlurElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGFEGaussianBlurElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGFEGaussianBlurElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGFEGaussianBlurElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEGaussianBlurElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEGaussianBlurElement::s_info = { "SVGFEGaussianBlurElement", &JSSVGElement::s_info, &JSSVGFEGaussianBlurElementTable , 0 };

JSSVGFEGaussianBlurElement::JSSVGFEGaussianBlurElement(JSObject* prototype, SVGFEGaussianBlurElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGFEGaussianBlurElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEGaussianBlurElement, Base>(exec, &JSSVGFEGaussianBlurElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEGaussianBlurElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case StdDeviationXAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationXAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StdDeviationYAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationYAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

JSValue* jsSVGFEGaussianBlurElementPrototypeFunctionSetStdDeviation(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEGaussianBlurElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEGaussianBlurElement* castedThisObj = static_cast<JSSVGFEGaussianBlurElement*>(thisValue);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThisObj->impl());
    float stdDeviationX = args.at(exec, 0)->toFloat(exec);
    float stdDeviationY = args.at(exec, 1)->toFloat(exec);

    imp->setStdDeviation(stdDeviationX, stdDeviationY);
    return jsUndefined();
}

JSValue* jsSVGFEGaussianBlurElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEGaussianBlurElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEGaussianBlurElement* castedThisObj = static_cast<JSSVGFEGaussianBlurElement*>(thisValue);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
