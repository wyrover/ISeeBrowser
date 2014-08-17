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

#ifndef JSNodeList_h
#define JSNodeList_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>
#include <kjs/CallData.h>

namespace WebCore {

class NodeList;

class JSNodeList : public DOMObject {
    typedef DOMObject Base;
public:
    JSNodeList(JSC::JSObject* prototype, NodeList*);
    virtual ~JSNodeList();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    virtual JSC::CallType getCallData(JSC::CallData&);

    virtual void getPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&);
    static JSC::JSValue* getConstructor(JSC::ExecState*);
    enum {
        // Attributes
        LengthAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
    NodeList* impl() const { return m_impl.get(); }

private:
    RefPtr<NodeList> m_impl;
    static JSC::JSValue* indexGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
private:
    static bool canGetItemsForName(JSC::ExecState*, NodeList*, const JSC::Identifier&);
    static JSC::JSValue* nameGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};

JSC::JSValue* toJS(JSC::ExecState*, NodeList*);
NodeList* toNodeList(JSC::JSValue*);

class JSNodeListPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSNodeListPrototype(JSC::ExecState* exec)
        : JSC::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

JSC::JSValue* jsNodeListPrototypeFunctionItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif
