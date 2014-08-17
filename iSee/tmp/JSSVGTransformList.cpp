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
#include "JSSVGTransformList.h"

#include <wtf/GetPtr.h>

#include "JSSVGMatrix.h"
#include "JSSVGTransform.h"
#include "SVGTransform.h"
#include "SVGTransformList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTransformList)

/* Hash table */

static const HashTableValue JSSVGTransformListTableValues[2] =
{
    { "numberOfItems", (intptr_t)JSSVGTransformList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGTransformListTable = { 0, JSSVGTransformListTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGTransformListPrototypeTableValues[10] =
{
    { "clear", (intptr_t)jsSVGTransformListPrototypeFunctionClear, DontDelete|Function, 0 },
    { "initialize", (intptr_t)jsSVGTransformListPrototypeFunctionInitialize, DontDelete|Function, 1 },
    { "getItem", (intptr_t)jsSVGTransformListPrototypeFunctionGetItem, DontDelete|Function, 1 },
    { "insertItemBefore", (intptr_t)jsSVGTransformListPrototypeFunctionInsertItemBefore, DontDelete|Function, 2 },
    { "replaceItem", (intptr_t)jsSVGTransformListPrototypeFunctionReplaceItem, DontDelete|Function, 2 },
    { "removeItem", (intptr_t)jsSVGTransformListPrototypeFunctionRemoveItem, DontDelete|Function, 1 },
    { "appendItem", (intptr_t)jsSVGTransformListPrototypeFunctionAppendItem, DontDelete|Function, 1 },
    { "createSVGTransformFromMatrix", (intptr_t)jsSVGTransformListPrototypeFunctionCreateSVGTransformFromMatrix, DontDelete|Function, 1 },
    { "consolidate", (intptr_t)jsSVGTransformListPrototypeFunctionConsolidate, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGTransformListPrototypeTable = { 63, JSSVGTransformListPrototypeTableValues, 0 };

const ClassInfo JSSVGTransformListPrototype::s_info = { "SVGTransformListPrototype", 0, &JSSVGTransformListPrototypeTable, 0 };

JSObject* JSSVGTransformListPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGTransformList.prototype]]");
    return JSC::cacheGlobalObject<JSSVGTransformListPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGTransformListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGTransformListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGTransformList::s_info = { "SVGTransformList", 0, &JSSVGTransformListTable , 0 };

JSSVGTransformList::JSSVGTransformList(JSObject* prototype, SVGTransformList* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGTransformList::~JSSVGTransformList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGTransformList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransformList, Base>(exec, &JSSVGTransformListTable, this, propertyName, slot);
}

JSValue* JSSVGTransformList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGTransformList* imp = static_cast<SVGTransformList*>(impl());
        return jsNumber(exec, imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* jsSVGTransformListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->clear(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->initialize(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->getItem(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->insertItemBefore(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->replaceItem(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->removeItem(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    return castedThisObj->appendItem(exec, args);
}

JSValue* jsSVGTransformListPrototypeFunctionCreateSVGTransformFromMatrix(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    SVGTransformList* imp = static_cast<SVGTransformList*>(castedThisObj->impl());
    AffineTransform matrix = toSVGMatrix(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<SVGTransform>::create(imp->createSVGTransformFromMatrix(matrix)).get(), castedThisObj->context());
    return result;
}

JSValue* jsSVGTransformListPrototypeFunctionConsolidate(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGTransformList::s_info))
        return throwError(exec, TypeError);
    JSSVGTransformList* castedThisObj = static_cast<JSSVGTransformList*>(thisValue);
    SVGTransformList* imp = static_cast<SVGTransformList*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<SVGTransform>::create(imp->consolidate()).get(), castedThisObj->context());
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGTransformList* obj, SVGElement* context)
{
    return cacheSVGDOMObject<SVGTransformList, JSSVGTransformList, JSSVGTransformListPrototype>(exec, obj, context);
}
SVGTransformList* toSVGTransformList(JSC::JSValue* val)
{
    return val->isObject(&JSSVGTransformList::s_info) ? static_cast<JSSVGTransformList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
