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

#include "JSCSSFontFaceRule.h"

#include <wtf/GetPtr.h>

#include "CSSFontFaceRule.h"
#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSFontFaceRule)

/* Hash table */

static const HashTableValue JSCSSFontFaceRuleTableValues[3] =
{
    { "style", (intptr_t)JSCSSFontFaceRule::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSFontFaceRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSFontFaceRuleTable = { 1, JSCSSFontFaceRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSFontFaceRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSFontFaceRuleConstructorTable = { 0, JSCSSFontFaceRuleConstructorTableValues, 0 };

class JSCSSFontFaceRuleConstructor : public DOMObject {
public:
    JSCSSFontFaceRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSFontFaceRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSFontFaceRuleConstructor::s_info = { "CSSFontFaceRuleConstructor", 0, &JSCSSFontFaceRuleConstructorTable, 0 };

bool JSCSSFontFaceRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSFontFaceRuleConstructor, DOMObject>(exec, &JSCSSFontFaceRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSFontFaceRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSFontFaceRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSFontFaceRulePrototypeTable = { 0, JSCSSFontFaceRulePrototypeTableValues, 0 };

const ClassInfo JSCSSFontFaceRulePrototype::s_info = { "CSSFontFaceRulePrototype", 0, &JSCSSFontFaceRulePrototypeTable, 0 };

JSObject* JSCSSFontFaceRulePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSCSSFontFaceRule.prototype]]");
    return JSC::cacheGlobalObject<JSCSSFontFaceRulePrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSCSSFontFaceRule::s_info = { "CSSFontFaceRule", &JSCSSRule::s_info, &JSCSSFontFaceRuleTable , 0 };

JSCSSFontFaceRule::JSCSSFontFaceRule(JSObject* prototype, CSSFontFaceRule* impl)
    : JSCSSRule(prototype, impl)
{
}

bool JSCSSFontFaceRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSFontFaceRule, Base>(exec, &JSCSSFontFaceRuleTable, this, propertyName, slot);
}

JSValue* JSCSSFontFaceRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case StyleAttrNum: {
        CSSFontFaceRule* imp = static_cast<CSSFontFaceRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCSSFontFaceRule::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[CSSFontFaceRule.constructor]]");
    return JSC::cacheGlobalObject<JSCSSFontFaceRuleConstructor>(exec, *constructorIdentifier);
}


}