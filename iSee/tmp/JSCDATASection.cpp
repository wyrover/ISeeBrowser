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

#include "JSCDATASection.h"

#include <wtf/GetPtr.h>

#include "CDATASection.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCDATASection)

/* Hash table */

static const HashTableValue JSCDATASectionTableValues[2] =
{
    { "constructor", (intptr_t)JSCDATASection::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCDATASectionTable = { 0, JSCDATASectionTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCDATASectionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCDATASectionConstructorTable = { 0, JSCDATASectionConstructorTableValues, 0 };

class JSCDATASectionConstructor : public DOMObject {
public:
    JSCDATASectionConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCDATASectionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCDATASectionConstructor::s_info = { "CDATASectionConstructor", 0, &JSCDATASectionConstructorTable, 0 };

bool JSCDATASectionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCDATASectionConstructor, DOMObject>(exec, &JSCDATASectionConstructorTable, this, propertyName, slot);
}

JSValue* JSCDATASectionConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCDATASectionPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCDATASectionPrototypeTable = { 0, JSCDATASectionPrototypeTableValues, 0 };

const ClassInfo JSCDATASectionPrototype::s_info = { "CDATASectionPrototype", 0, &JSCDATASectionPrototypeTable, 0 };

JSObject* JSCDATASectionPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSCDATASection.prototype]]");
    return JSC::cacheGlobalObject<JSCDATASectionPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSCDATASection::s_info = { "CDATASection", &JSText::s_info, &JSCDATASectionTable , 0 };

JSCDATASection::JSCDATASection(JSObject* prototype, CDATASection* impl)
    : JSText(prototype, impl)
{
}

bool JSCDATASection::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCDATASection, Base>(exec, &JSCDATASectionTable, this, propertyName, slot);
}

JSValue* JSCDATASection::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCDATASection::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[CDATASection.constructor]]");
    return JSC::cacheGlobalObject<JSCDATASectionConstructor>(exec, *constructorIdentifier);
}


}
