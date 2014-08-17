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


#if ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGForeignObjectElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGForeignObjectElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGForeignObjectElement)

/* Hash table */

static const HashTableValue JSSVGForeignObjectElementTableValues[16] =
{
    { "x", (intptr_t)JSSVGForeignObjectElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGForeignObjectElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "width", (intptr_t)JSSVGForeignObjectElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSSVGForeignObjectElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredFeatures", (intptr_t)JSSVGForeignObjectElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGForeignObjectElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGForeignObjectElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "xmllang", (intptr_t)JSSVGForeignObjectElement::XmllangAttrNum, DontDelete, 0 },
    { "xmlspace", (intptr_t)JSSVGForeignObjectElement::XmlspaceAttrNum, DontDelete, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGForeignObjectElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGForeignObjectElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGForeignObjectElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "transform", (intptr_t)JSSVGForeignObjectElement::TransformAttrNum, DontDelete|ReadOnly, 0 },
    { "nearestViewportElement", (intptr_t)JSSVGForeignObjectElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "farthestViewportElement", (intptr_t)JSSVGForeignObjectElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGForeignObjectElementTable = { 1023, JSSVGForeignObjectElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGForeignObjectElementPrototypeTableValues[7] =
{
    { "hasExtension", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "getPresentationAttribute", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { "getBBox", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetBBox, DontDelete|Function, 0 },
    { "getCTM", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetCTM, DontDelete|Function, 0 },
    { "getScreenCTM", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetScreenCTM, DontDelete|Function, 0 },
    { "getTransformToElement", (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetTransformToElement, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGForeignObjectElementPrototypeTable = { 2047, JSSVGForeignObjectElementPrototypeTableValues, 0 };

const ClassInfo JSSVGForeignObjectElementPrototype::s_info = { "SVGForeignObjectElementPrototype", 0, &JSSVGForeignObjectElementPrototypeTable, 0 };

JSObject* JSSVGForeignObjectElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGForeignObjectElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGForeignObjectElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGForeignObjectElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGForeignObjectElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGForeignObjectElement::s_info = { "SVGForeignObjectElement", &JSSVGElement::s_info, &JSSVGForeignObjectElementTable , 0 };

JSSVGForeignObjectElement::JSSVGForeignObjectElement(JSObject* prototype, SVGForeignObjectElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGForeignObjectElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGForeignObjectElement, Base>(exec, &JSSVGForeignObjectElementTable, this, propertyName, slot);
}

JSValue* JSSVGForeignObjectElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case RequiredFeaturesAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return jsString(exec, imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return jsString(exec, imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGForeignObjectElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGForeignObjectElement, Base>(exec, propertyName, value, &JSSVGForeignObjectElementTable, this, slot);
}

void JSSVGForeignObjectElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(impl());
        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue* jsSVGForeignObjectElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisValue);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)
