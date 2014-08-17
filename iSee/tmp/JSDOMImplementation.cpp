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

#include "JSDOMImplementation.h"

#include <wtf/GetPtr.h>

#include "CSSStyleSheet.h"
#include "DOMImplementation.h"
#include "Document.h"
#include "DocumentType.h"
#include "HTMLDocument.h"
#include "JSCSSStyleSheet.h"
#include "JSDocument.h"
#include "JSDocumentType.h"
#include "JSHTMLDocument.h"
#include "NodeFilter.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMImplementation)

/* Hash table */

static const HashTableValue JSDOMImplementationTableValues[2] =
{
    { "constructor", (intptr_t)JSDOMImplementation::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMImplementationTable = { 0, JSDOMImplementationTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSDOMImplementationConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMImplementationConstructorTable = { 0, JSDOMImplementationConstructorTableValues, 0 };

class JSDOMImplementationConstructor : public DOMObject {
public:
    JSDOMImplementationConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSDOMImplementationPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSDOMImplementationConstructor::s_info = { "DOMImplementationConstructor", 0, &JSDOMImplementationConstructorTable, 0 };

bool JSDOMImplementationConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMImplementationConstructor, DOMObject>(exec, &JSDOMImplementationConstructorTable, this, propertyName, slot);
}

JSValue* JSDOMImplementationConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSDOMImplementationPrototypeTableValues[6] =
{
    { "hasFeature", (intptr_t)jsDOMImplementationPrototypeFunctionHasFeature, DontDelete|Function, 2 },
    { "createDocumentType", (intptr_t)jsDOMImplementationPrototypeFunctionCreateDocumentType, DontDelete|Function, 3 },
    { "createDocument", (intptr_t)jsDOMImplementationPrototypeFunctionCreateDocument, DontDelete|Function, 3 },
    { "createCSSStyleSheet", (intptr_t)jsDOMImplementationPrototypeFunctionCreateCSSStyleSheet, DontDelete|Function, 2 },
    { "createHTMLDocument", (intptr_t)jsDOMImplementationPrototypeFunctionCreateHTMLDocument, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMImplementationPrototypeTable = { 127, JSDOMImplementationPrototypeTableValues, 0 };

const ClassInfo JSDOMImplementationPrototype::s_info = { "DOMImplementationPrototype", 0, &JSDOMImplementationPrototypeTable, 0 };

JSObject* JSDOMImplementationPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSDOMImplementation.prototype]]");
    return JSC::cacheGlobalObject<JSDOMImplementationPrototype>(exec, *prototypeIdentifier);
}

bool JSDOMImplementationPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMImplementationPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSDOMImplementation::s_info = { "DOMImplementation", 0, &JSDOMImplementationTable , 0 };

JSDOMImplementation::JSDOMImplementation(JSObject* prototype, DOMImplementation* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSDOMImplementation::~JSDOMImplementation()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSDOMImplementation::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMImplementation, Base>(exec, &JSDOMImplementationTable, this, propertyName, slot);
}

JSValue* JSDOMImplementation::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSDOMImplementation::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[DOMImplementation.constructor]]");
    return JSC::cacheGlobalObject<JSDOMImplementationConstructor>(exec, *constructorIdentifier);
}

JSValue* jsDOMImplementationPrototypeFunctionHasFeature(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMImplementation::s_info))
        return throwError(exec, TypeError);
    JSDOMImplementation* castedThisObj = static_cast<JSDOMImplementation*>(thisValue);
    DOMImplementation* imp = static_cast<DOMImplementation*>(castedThisObj->impl());
    const UString& feature = args.at(exec, 0)->toString(exec);
    const UString& version = valueToStringWithNullCheck(exec, args.at(exec, 1));


    JSC::JSValue* result = jsBoolean(imp->hasFeature(feature, version));
    return result;
}

JSValue* jsDOMImplementationPrototypeFunctionCreateDocumentType(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMImplementation::s_info))
        return throwError(exec, TypeError);
    JSDOMImplementation* castedThisObj = static_cast<JSDOMImplementation*>(thisValue);
    DOMImplementation* imp = static_cast<DOMImplementation*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& qualifiedName = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));
    const UString& publicId = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 1));
    const UString& systemId = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 2));


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->createDocumentType(qualifiedName, publicId, systemId, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsDOMImplementationPrototypeFunctionCreateDocument(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMImplementation::s_info))
        return throwError(exec, TypeError);
    JSDOMImplementation* castedThisObj = static_cast<JSDOMImplementation*>(thisValue);
    DOMImplementation* imp = static_cast<DOMImplementation*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& qualifiedName = valueToStringWithNullCheck(exec, args.at(exec, 1));
    DocumentType* doctype = toDocumentType(args.at(exec, 2));


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->createDocument(namespaceURI, qualifiedName, doctype, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsDOMImplementationPrototypeFunctionCreateCSSStyleSheet(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMImplementation::s_info))
        return throwError(exec, TypeError);
    JSDOMImplementation* castedThisObj = static_cast<JSDOMImplementation*>(thisValue);
    DOMImplementation* imp = static_cast<DOMImplementation*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& title = args.at(exec, 0)->toString(exec);
    const UString& media = args.at(exec, 1)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->createCSSStyleSheet(title, media, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsDOMImplementationPrototypeFunctionCreateHTMLDocument(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMImplementation::s_info))
        return throwError(exec, TypeError);
    JSDOMImplementation* castedThisObj = static_cast<JSDOMImplementation*>(thisValue);
    DOMImplementation* imp = static_cast<DOMImplementation*>(castedThisObj->impl());
    const UString& title = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->createHTMLDocument(title)));
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, DOMImplementation* obj)
{
    return cacheDOMObject<DOMImplementation, JSDOMImplementation, JSDOMImplementationPrototype>(exec, obj);
}
DOMImplementation* toDOMImplementation(JSC::JSValue* val)
{
    return val->isObject(&JSDOMImplementation::s_info) ? static_cast<JSDOMImplementation*>(val)->impl() : 0;
}

}
