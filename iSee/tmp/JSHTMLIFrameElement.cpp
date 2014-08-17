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

#include "JSHTMLIFrameElement.h"

#include <wtf/GetPtr.h>

#include "DOMWindow.h"
#include "Document.h"
#include "HTMLIFrameElement.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLIFrameElement)

/* Hash table */

static const HashTableValue JSHTMLIFrameElementTableValues[14] =
{
    { "align", (intptr_t)JSHTMLIFrameElement::AlignAttrNum, DontDelete, 0 },
    { "frameBorder", (intptr_t)JSHTMLIFrameElement::FrameBorderAttrNum, DontDelete, 0 },
    { "height", (intptr_t)JSHTMLIFrameElement::HeightAttrNum, DontDelete, 0 },
    { "longDesc", (intptr_t)JSHTMLIFrameElement::LongDescAttrNum, DontDelete, 0 },
    { "marginHeight", (intptr_t)JSHTMLIFrameElement::MarginHeightAttrNum, DontDelete, 0 },
    { "marginWidth", (intptr_t)JSHTMLIFrameElement::MarginWidthAttrNum, DontDelete, 0 },
    { "name", (intptr_t)JSHTMLIFrameElement::NameAttrNum, DontDelete, 0 },
    { "scrolling", (intptr_t)JSHTMLIFrameElement::ScrollingAttrNum, DontDelete, 0 },
    { "src", (intptr_t)JSHTMLIFrameElement::SrcAttrNum, DontDelete, 0 },
    { "width", (intptr_t)JSHTMLIFrameElement::WidthAttrNum, DontDelete, 0 },
    { "contentDocument", (intptr_t)JSHTMLIFrameElement::ContentDocumentAttrNum, DontDelete|ReadOnly, 0 },
    { "contentWindow", (intptr_t)JSHTMLIFrameElement::ContentWindowAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSHTMLIFrameElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLIFrameElementTable = { 16383, JSHTMLIFrameElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLIFrameElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLIFrameElementConstructorTable = { 0, JSHTMLIFrameElementConstructorTableValues, 0 };

class JSHTMLIFrameElementConstructor : public DOMObject {
public:
    JSHTMLIFrameElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLIFrameElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLIFrameElementConstructor::s_info = { "HTMLIFrameElementConstructor", 0, &JSHTMLIFrameElementConstructorTable, 0 };

bool JSHTMLIFrameElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElementConstructor, DOMObject>(exec, &JSHTMLIFrameElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLIFrameElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLIFrameElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLIFrameElementPrototypeTable = { 0, JSHTMLIFrameElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLIFrameElementPrototype::s_info = { "HTMLIFrameElementPrototype", 0, &JSHTMLIFrameElementPrototypeTable, 0 };

JSObject* JSHTMLIFrameElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLIFrameElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLIFrameElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLIFrameElement::s_info = { "HTMLIFrameElement", &JSHTMLElement::s_info, &JSHTMLIFrameElementTable , 0 };

JSHTMLIFrameElement::JSHTMLIFrameElement(JSObject* prototype, HTMLIFrameElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLIFrameElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElement, Base>(exec, &JSHTMLIFrameElementTable, this, propertyName, slot);
}

JSValue* JSHTMLIFrameElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->align());
    }
    case FrameBorderAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->frameBorder());
    }
    case HeightAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->height());
    }
    case LongDescAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->longDesc());
    }
    case MarginHeightAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->marginHeight());
    }
    case MarginWidthAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->marginWidth());
    }
    case NameAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->name());
    }
    case ScrollingAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->scrolling());
    }
    case SrcAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->src());
    }
    case WidthAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return jsString(exec, imp->width());
    }
    case ContentDocumentAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return checkNodeSecurity(exec, imp->contentDocument()) ? toJS(exec, WTF::getPtr(imp->contentDocument())) : jsUndefined();
    }
    case ContentWindowAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->contentWindow()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLIFrameElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLIFrameElement, Base>(exec, propertyName, value, &JSHTMLIFrameElementTable, this, slot);
}

void JSHTMLIFrameElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case FrameBorderAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setFrameBorder(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HeightAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LongDescAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setLongDesc(valueToStringWithNullCheck(exec, value));
        break;
    }
    case MarginHeightAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setMarginHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case MarginWidthAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setMarginWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NameAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ScrollingAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setScrolling(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SrcAttrNum: {
        setSrc(exec, value);
        break;
    }
    case WidthAttrNum: {
        HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(impl());
        imp->setWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLIFrameElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLIFrameElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLIFrameElementConstructor>(exec, *constructorIdentifier);
}


}
