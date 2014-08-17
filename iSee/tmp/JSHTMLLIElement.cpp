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

#include "JSHTMLLIElement.h"

#include <wtf/GetPtr.h>

#include "HTMLLIElement.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLLIElement)

/* Hash table */

static const HashTableValue JSHTMLLIElementTableValues[4] =
{
    { "type", (intptr_t)JSHTMLLIElement::TypeAttrNum, DontDelete, 0 },
    { "value", (intptr_t)JSHTMLLIElement::ValueAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLLIElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLLIElementTable = { 31, JSHTMLLIElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLLIElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLLIElementConstructorTable = { 0, JSHTMLLIElementConstructorTableValues, 0 };

class JSHTMLLIElementConstructor : public DOMObject {
public:
    JSHTMLLIElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLLIElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLLIElementConstructor::s_info = { "HTMLLIElementConstructor", 0, &JSHTMLLIElementConstructorTable, 0 };

bool JSHTMLLIElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLIElementConstructor, DOMObject>(exec, &JSHTMLLIElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLLIElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLIElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLLIElementPrototypeTable = { 0, JSHTMLLIElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLLIElementPrototype::s_info = { "HTMLLIElementPrototype", 0, &JSHTMLLIElementPrototypeTable, 0 };

JSObject* JSHTMLLIElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLLIElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLLIElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLLIElement::s_info = { "HTMLLIElement", &JSHTMLElement::s_info, &JSHTMLLIElementTable , 0 };

JSHTMLLIElement::JSHTMLLIElement(JSObject* prototype, HTMLLIElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLLIElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLIElement, Base>(exec, &JSHTMLLIElementTable, this, propertyName, slot);
}

JSValue* JSHTMLLIElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TypeAttrNum: {
        HTMLLIElement* imp = static_cast<HTMLLIElement*>(impl());
        return jsString(exec, imp->type());
    }
    case ValueAttrNum: {
        HTMLLIElement* imp = static_cast<HTMLLIElement*>(impl());
        return jsNumber(exec, imp->value());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLLIElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLLIElement, Base>(exec, propertyName, value, &JSHTMLLIElementTable, this, slot);
}

void JSHTMLLIElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case TypeAttrNum: {
        HTMLLIElement* imp = static_cast<HTMLLIElement*>(impl());
        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ValueAttrNum: {
        HTMLLIElement* imp = static_cast<HTMLLIElement*>(impl());
        imp->setValue(value->toInt32(exec));
        break;
    }
    }
}

JSValue* JSHTMLLIElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLLIElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLLIElementConstructor>(exec, *constructorIdentifier);
}


}
