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


#if ENABLE(SVG_ANIMATION)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGAnimateColorElement.h"

#include <wtf/GetPtr.h>

#include "SVGAnimateColorElement.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimateColorElement)

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateColorElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimateColorElementPrototypeTable = { 0, JSSVGAnimateColorElementPrototypeTableValues, 0 };

const ClassInfo JSSVGAnimateColorElementPrototype::s_info = { "SVGAnimateColorElementPrototype", 0, &JSSVGAnimateColorElementPrototypeTable, 0 };

JSObject* JSSVGAnimateColorElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGAnimateColorElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGAnimateColorElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGAnimateColorElement::s_info = { "SVGAnimateColorElement", &JSSVGAnimationElement::s_info, 0 , 0 };

JSSVGAnimateColorElement::JSSVGAnimateColorElement(JSObject* prototype, SVGAnimateColorElement* impl)
    : JSSVGAnimationElement(prototype, impl)
{
}


}

#endif // ENABLE(SVG_ANIMATION)
