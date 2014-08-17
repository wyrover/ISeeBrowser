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

#ifndef JSSVGPathSegList_h
#define JSSVGPathSegList_h


#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class SVGPathSegList;

class JSSVGPathSegList : public DOMObject {
    typedef DOMObject Base;
public:
    JSSVGPathSegList(JSC::JSObject* prototype, SVGPathSegList*, SVGElement* context);
    virtual ~JSSVGPathSegList();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        NumberOfItemsAttrNum, 
    };

    // Custom functions
    JSC::JSValue* clear(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* initialize(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* getItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* insertItemBefore(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* replaceItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* removeItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* appendItem(JSC::ExecState*, const JSC::ArgList&);
    SVGPathSegList* impl() const { return m_impl.get(); }
    SVGElement* context() const { return m_context.get(); }

private:
    RefPtr<SVGElement> m_context;
    RefPtr<SVGPathSegList > m_impl;
};

JSC::JSValue* toJS(JSC::ExecState*, SVGPathSegList*, SVGElement* context);
SVGPathSegList* toSVGPathSegList(JSC::JSValue*);

class JSSVGPathSegListPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSSVGPathSegListPrototype(JSC::ExecState* exec)
        : JSC::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

JSC::JSValue* jsSVGPathSegListPrototypeFunctionClear(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionInitialize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionGetItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionInsertItemBefore(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionReplaceItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionRemoveItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPathSegListPrototypeFunctionAppendItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif // ENABLE(SVG)

#endif
