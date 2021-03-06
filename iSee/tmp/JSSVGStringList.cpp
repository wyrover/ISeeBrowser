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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGStringList.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGStringList)

/* Hash table */

static const HashTableValue JSSVGStringListTableValues[2] =
{
    { "numberOfItems", (intptr_t)JSSVGStringList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGStringListTable = { 0, JSSVGStringListTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGStringListPrototypeTableValues[8] =
{
    { "clear", (intptr_t)jsSVGStringListPrototypeFunctionClear, DontDelete|Function, 0 },
    { "initialize", (intptr_t)jsSVGStringListPrototypeFunctionInitialize, DontDelete|Function, 1 },
    { "getItem", (intptr_t)jsSVGStringListPrototypeFunctionGetItem, DontDelete|Function, 1 },
    { "insertItemBefore", (intptr_t)jsSVGStringListPrototypeFunctionInsertItemBefore, DontDelete|Function, 2 },
    { "replaceItem", (intptr_t)jsSVGStringListPrototypeFunctionReplaceItem, DontDelete|Function, 2 },
    { "removeItem", (intptr_t)jsSVGStringListPrototypeFunctionRemoveItem, DontDelete|Function, 1 },
    { "appendItem", (intptr_t)jsSVGStringListPrototypeFunctionAppendItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGStringListPrototypeTable = { 63, JSSVGStringListPrototypeTableValues, 0 };

const ClassInfo JSSVGStringListPrototype::s_info = { "SVGStringListPrototype", 0, &JSSVGStringListPrototypeTable, 0 };

JSObject* JSSVGStringListPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGStringList.prototype]]");
    return JSC::cacheGlobalObject<JSSVGStringListPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGStringListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGStringListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGStringList::s_info = { "SVGStringList", 0, &JSSVGStringListTable , 0 };

JSSVGStringList::JSSVGStringList(JSObject* prototype, SVGStringList* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGStringList::~JSSVGStringList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGStringList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGStringList, Base>(exec, &JSSVGStringListTable, this, propertyName, slot);
}

JSValue* JSSVGStringList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGStringList* imp = static_cast<SVGStringList*>(impl());
        return jsNumber(exec, imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* jsSVGStringListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->clear(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsSVGStringListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsString(exec, imp->initialize(item, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGStringListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = jsString(exec, imp->getItem(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGStringListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(exec, 0)->toString(exec);
    unsigned index = args.at(exec, 1)->toInt32(exec);


    JSC::JSValue* result = jsString(exec, imp->insertItemBefore(item, index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGStringListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(exec, 0)->toString(exec);
    unsigned index = args.at(exec, 1)->toInt32(exec);


    JSC::JSValue* result = jsString(exec, imp->replaceItem(item, index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGStringListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = jsString(exec, imp->removeItem(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsSVGStringListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(thisValue);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsString(exec, imp->appendItem(item, ec));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGStringList* obj, SVGElement* context)
{
    return cacheSVGDOMObject<SVGStringList, JSSVGStringList, JSSVGStringListPrototype>(exec, obj, context);
}
SVGStringList* toSVGStringList(JSC::JSValue* val)
{
    return val->isObject(&JSSVGStringList::s_info) ? static_cast<JSSVGStringList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
