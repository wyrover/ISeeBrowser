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

#include "JSCSSStyleDeclaration.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "AtomicString.h"
#include "CSSRule.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSRule.h"
#include "JSCSSStyleDeclarationCustom.h"
#include "JSCSSValue.h"
#include "KURL.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSStyleDeclaration)

/* Hash table */

static const HashTableValue JSCSSStyleDeclarationTableValues[5] =
{
    { "cssText", (intptr_t)JSCSSStyleDeclaration::CssTextAttrNum, DontDelete, 0 },
    { "length", (intptr_t)JSCSSStyleDeclaration::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { "parentRule", (intptr_t)JSCSSStyleDeclaration::ParentRuleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSStyleDeclaration::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleDeclarationTable = { 63, JSCSSStyleDeclarationTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSStyleDeclarationConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleDeclarationConstructorTable = { 0, JSCSSStyleDeclarationConstructorTableValues, 0 };

class JSCSSStyleDeclarationConstructor : public DOMObject {
public:
    JSCSSStyleDeclarationConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSStyleDeclarationPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSStyleDeclarationConstructor::s_info = { "CSSStyleDeclarationConstructor", 0, &JSCSSStyleDeclarationConstructorTable, 0 };

bool JSCSSStyleDeclarationConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSStyleDeclarationConstructor, DOMObject>(exec, &JSCSSStyleDeclarationConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSStyleDeclarationConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSStyleDeclarationPrototypeTableValues[9] =
{
    { "getPropertyValue", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionGetPropertyValue, DontDelete|Function, 1 },
    { "getPropertyCSSValue", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionGetPropertyCSSValue, DontDelete|Function, 1 },
    { "removeProperty", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionRemoveProperty, DontDelete|Function, 1 },
    { "getPropertyPriority", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionGetPropertyPriority, DontDelete|Function, 1 },
    { "setProperty", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionSetProperty, DontDelete|Function, 3 },
    { "item", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionItem, DontDelete|Function, 1 },
    { "getPropertyShorthand", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionGetPropertyShorthand, DontDelete|Function, 1 },
    { "isPropertyImplicit", (intptr_t)jsCSSStyleDeclarationPrototypeFunctionIsPropertyImplicit, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleDeclarationPrototypeTable = { 31, JSCSSStyleDeclarationPrototypeTableValues, 0 };

const ClassInfo JSCSSStyleDeclarationPrototype::s_info = { "CSSStyleDeclarationPrototype", 0, &JSCSSStyleDeclarationPrototypeTable, 0 };

JSObject* JSCSSStyleDeclarationPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSCSSStyleDeclaration.prototype]]");
    return JSC::cacheGlobalObject<JSCSSStyleDeclarationPrototype>(exec, *prototypeIdentifier);
}

bool JSCSSStyleDeclarationPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCSSStyleDeclarationPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCSSStyleDeclaration::s_info = { "CSSStyleDeclaration", 0, &JSCSSStyleDeclarationTable , 0 };

JSCSSStyleDeclaration::JSCSSStyleDeclaration(JSObject* prototype, CSSStyleDeclaration* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSCSSStyleDeclaration::~JSCSSStyleDeclaration()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSCSSStyleDeclaration::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSCSSStyleDeclarationTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSCSSStyleDeclaration>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<CSSStyleDeclaration*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<CSSStyleDeclaration*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSCSSStyleDeclaration, Base>(exec, &JSCSSStyleDeclarationTable, this, propertyName, slot);
}

bool JSCSSStyleDeclaration::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<CSSStyleDeclaration*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSCSSStyleDeclaration::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CssTextAttrNum: {
        CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(impl());
        return jsStringOrNull(exec, imp->cssText());
    }
    case LengthAttrNum: {
        CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(impl());
        return jsNumber(exec, imp->length());
    }
    case ParentRuleAttrNum: {
        CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(impl());
        return toJS(exec, WTF::getPtr(imp->parentRule()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSStyleDeclaration::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    if (customPut(exec, propertyName, value, slot))
        return;
    lookupPut<JSCSSStyleDeclaration, Base>(exec, propertyName, value, &JSCSSStyleDeclarationTable, this, slot);
}

void JSCSSStyleDeclaration::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CssTextAttrNum: {
        CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(impl());
        ExceptionCode ec = 0;
        imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

void JSCSSStyleDeclaration::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<CSSStyleDeclaration*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSCSSStyleDeclaration::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[CSSStyleDeclaration.constructor]]");
    return JSC::cacheGlobalObject<JSCSSStyleDeclarationConstructor>(exec, *constructorIdentifier);
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionGetPropertyValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsStringOrNull(exec, imp->getPropertyValue(propertyName));
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionGetPropertyCSSValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPropertyCSSValue(propertyName)));
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionRemoveProperty(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsStringOrNull(exec, imp->removeProperty(propertyName, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionGetPropertyPriority(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsStringOrNull(exec, imp->getPropertyPriority(propertyName));
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionSetProperty(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& propertyName = args.at(exec, 0)->toString(exec);
    const UString& value = valueToStringWithNullCheck(exec, args.at(exec, 1));
    const UString& priority = args.at(exec, 2)->toString(exec);

    imp->setProperty(propertyName, value, priority, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = jsStringOrNull(exec, imp->item(index));
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionGetPropertyShorthand(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsStringOrNull(exec, imp->getPropertyShorthand(propertyName));
    return result;
}

JSValue* jsCSSStyleDeclarationPrototypeFunctionIsPropertyImplicit(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSStyleDeclaration::s_info))
        return throwError(exec, TypeError);
    JSCSSStyleDeclaration* castedThisObj = static_cast<JSCSSStyleDeclaration*>(thisValue);
    CSSStyleDeclaration* imp = static_cast<CSSStyleDeclaration*>(castedThisObj->impl());
    const UString& propertyName = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->isPropertyImplicit(propertyName));
    return result;
}


JSValue* JSCSSStyleDeclaration::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSCSSStyleDeclaration* thisObj = static_cast<JSCSSStyleDeclaration*>(slot.slotBase());
    return jsStringOrNull(exec, thisObj->impl()->item(slot.index()));
}
JSC::JSValue* toJS(JSC::ExecState* exec, CSSStyleDeclaration* obj)
{
    return cacheDOMObject<CSSStyleDeclaration, JSCSSStyleDeclaration, JSCSSStyleDeclarationPrototype>(exec, obj);
}
CSSStyleDeclaration* toCSSStyleDeclaration(JSC::JSValue* val)
{
    return val->isObject(&JSCSSStyleDeclaration::s_info) ? static_cast<JSCSSStyleDeclaration*>(val)->impl() : 0;
}

}
