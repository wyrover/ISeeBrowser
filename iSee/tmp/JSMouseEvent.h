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

#ifndef JSMouseEvent_h
#define JSMouseEvent_h

#include "JSUIEvent.h"

namespace WebCore {

class MouseEvent;

class JSMouseEvent : public JSUIEvent {
    typedef JSUIEvent Base;
public:
    JSMouseEvent(JSC::JSObject* prototype, MouseEvent*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static JSC::JSValue* getConstructor(JSC::ExecState*);
    enum {
        // Attributes
        ScreenXAttrNum, ScreenYAttrNum, ClientXAttrNum, ClientYAttrNum, 
        CtrlKeyAttrNum, ShiftKeyAttrNum, AltKeyAttrNum, MetaKeyAttrNum, 
        ButtonAttrNum, RelatedTargetAttrNum, OffsetXAttrNum, OffsetYAttrNum, 
        XAttrNum, YAttrNum, FromElementAttrNum, ToElementAttrNum, 
        DataTransferAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
};


class JSMouseEventPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSMouseEventPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSUIEventPrototype::self(exec)) { }
};

// Functions

JSC::JSValue* jsMouseEventPrototypeFunctionInitMouseEvent(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif
