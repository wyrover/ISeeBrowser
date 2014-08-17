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
#include "JSSVGAnimationElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGElement.h"
#include "JSSVGStringList.h"
#include "SVGAnimationElement.h"
#include "SVGElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimationElement)

/* Hash table */

static const HashTableValue JSSVGAnimationElementTableValues[6] =
{
    { "targetElement", (intptr_t)JSSVGAnimationElement::TargetElementAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredFeatures", (intptr_t)JSSVGAnimationElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGAnimationElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGAnimationElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGAnimationElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimationElementTable = { 15, JSSVGAnimationElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGAnimationElementPrototypeTableValues[9] =
{
    { "getStartTime", (intptr_t)jsSVGAnimationElementPrototypeFunctionGetStartTime, DontDelete|Function, 0 },
    { "getCurrentTime", (intptr_t)jsSVGAnimationElementPrototypeFunctionGetCurrentTime, DontDelete|Function, 0 },
    { "getSimpleDuration", (intptr_t)jsSVGAnimationElementPrototypeFunctionGetSimpleDuration, DontDelete|Function, 0 },
    { "hasExtension", (intptr_t)jsSVGAnimationElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "beginElement", (intptr_t)jsSVGAnimationElementPrototypeFunctionBeginElement, DontDelete|Function, 0 },
    { "beginElementAt", (intptr_t)jsSVGAnimationElementPrototypeFunctionBeginElementAt, DontDelete|Function, 1 },
    { "endElement", (intptr_t)jsSVGAnimationElementPrototypeFunctionEndElement, DontDelete|Function, 0 },
    { "endElementAt", (intptr_t)jsSVGAnimationElementPrototypeFunctionEndElementAt, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimationElementPrototypeTable = { 63, JSSVGAnimationElementPrototypeTableValues, 0 };

const ClassInfo JSSVGAnimationElementPrototype::s_info = { "SVGAnimationElementPrototype", 0, &JSSVGAnimationElementPrototypeTable, 0 };

JSObject* JSSVGAnimationElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGAnimationElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGAnimationElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGAnimationElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGAnimationElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGAnimationElement::s_info = { "SVGAnimationElement", &JSSVGElement::s_info, &JSSVGAnimationElementTable , 0 };

JSSVGAnimationElement::JSSVGAnimationElement(JSObject* prototype, SVGAnimationElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGAnimationElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimationElement, Base>(exec, &JSSVGAnimationElementTable, this, propertyName, slot);
}

JSValue* JSSVGAnimationElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TargetElementAttrNum: {
        SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->targetElement()));
    }
    case RequiredFeaturesAttrNum: {
        SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    }
    return 0;
}

JSValue* jsSVGAnimationElementPrototypeFunctionGetStartTime(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());


    JSC::JSValue* result = jsNumber(exec, imp->getStartTime());
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionGetCurrentTime(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());


    JSC::JSValue* result = jsNumber(exec, imp->getCurrentTime());
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionGetSimpleDuration(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue* result = jsNumber(exec, imp->getSimpleDuration(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionBeginElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue* result = jsBoolean(imp->beginElement(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionBeginElementAt(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float offset = args.at(exec, 0)->toFloat(exec);


    JSC::JSValue* result = jsBoolean(imp->beginElementAt(offset, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionEndElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue* result = jsBoolean(imp->endElement(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGAnimationElementPrototypeFunctionEndElementAt(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(thisValue);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float offset = args.at(exec, 0)->toFloat(exec);


    JSC::JSValue* result = jsBoolean(imp->endElementAt(offset, ec));
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG_ANIMATION)
