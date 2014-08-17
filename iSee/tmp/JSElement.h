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

#ifndef JSElement_h
#define JSElement_h

#include "JSEventTargetNode.h"
#include <kjs/lookup.h>
#include <wtf/AlwaysInline.h>
#include "Element.h"
namespace WebCore {

class Element;

class JSElement : public JSEventTargetNode {
    typedef JSEventTargetNode Base;
public:
    JSElement(JSC::JSObject* prototype, Element*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static JSC::JSValue* getConstructor(JSC::ExecState*);
    enum {
        // Attributes
        TagNameAttrNum, StyleAttrNum, OffsetLeftAttrNum, OffsetTopAttrNum, 
        OffsetWidthAttrNum, OffsetHeightAttrNum, OffsetParentAttrNum, ClientLeftAttrNum, 
        ClientTopAttrNum, ClientWidthAttrNum, ClientHeightAttrNum, ScrollLeftAttrNum, 
        ScrollTopAttrNum, ScrollWidthAttrNum, ScrollHeightAttrNum, FirstElementChildAttrNum, 
        LastElementChildAttrNum, PreviousElementSiblingAttrNum, NextElementSiblingAttrNum, ChildElementCountAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom functions
    JSC::JSValue* setAttribute(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* setAttributeNode(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* setAttributeNS(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* setAttributeNodeNS(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* querySelector(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* querySelectorAll(JSC::ExecState*, const JSC::ArgList&);
    Element* impl() const
    {
        return static_cast<Element*>(Base::impl());
    }
};

ALWAYS_INLINE bool JSElement::getOwnPropertySlot(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertySlot& slot)
{
    return JSC::getStaticValueSlot<JSElement, Base>(exec, s_info.staticPropHashTable, this, propertyName, slot);
}

Element* toElement(JSC::JSValue*);
JSC::JSValue* toJSNewlyCreated(JSC::ExecState*, Element*);

class JSElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSElementPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSEventTargetNodePrototype::self(exec)) { }
};

// Functions

JSC::JSValue* jsElementPrototypeFunctionGetAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionSetAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionRemoveAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionSetAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionRemoveAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetElementsByTagName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionSetAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionRemoveAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetAttributeNodeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionSetAttributeNodeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionHasAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionHasAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionFocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionBlur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionScrollIntoView(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionContains(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionScrollIntoViewIfNeeded(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionScrollByLines(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionScrollByPages(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionGetElementsByClassName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionQuerySelector(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsElementPrototypeFunctionQuerySelectorAll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif
