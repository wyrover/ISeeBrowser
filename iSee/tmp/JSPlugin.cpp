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

#include "JSPlugin.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "AtomicString.h"
#include "KURL.h"
#include "Plugin.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSPlugin)

/* Hash table */

static const HashTableValue JSPluginTableValues[5] =
{
    { "name", (intptr_t)JSPlugin::NameAttrNum, DontDelete|ReadOnly, 0 },
    { "filename", (intptr_t)JSPlugin::FilenameAttrNum, DontDelete|ReadOnly, 0 },
    { "description", (intptr_t)JSPlugin::DescriptionAttrNum, DontDelete|ReadOnly, 0 },
    { "length", (intptr_t)JSPlugin::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPluginTable = { 15, JSPluginTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSPluginPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSPluginPrototypeTable = { 0, JSPluginPrototypeTableValues, 0 };

const ClassInfo JSPluginPrototype::s_info = { "PluginPrototype", 0, &JSPluginPrototypeTable, 0 };

JSObject* JSPluginPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSPlugin.prototype]]");
    return JSC::cacheGlobalObject<JSPluginPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSPlugin::s_info = { "Plugin", 0, &JSPluginTable , 0 };

JSPlugin::JSPlugin(JSObject* prototype, Plugin* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSPlugin::~JSPlugin()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSPlugin::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSPluginTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSPlugin>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<Plugin*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<Plugin*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSPlugin, Base>(exec, &JSPluginTable, this, propertyName, slot);
}

bool JSPlugin::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<Plugin*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSPlugin::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NameAttrNum: {
        Plugin* imp = static_cast<Plugin*>(impl());
        return jsString(exec, imp->name());
    }
    case FilenameAttrNum: {
        Plugin* imp = static_cast<Plugin*>(impl());
        return jsString(exec, imp->filename());
    }
    case DescriptionAttrNum: {
        Plugin* imp = static_cast<Plugin*>(impl());
        return jsString(exec, imp->description());
    }
    case LengthAttrNum: {
        Plugin* imp = static_cast<Plugin*>(impl());
        return jsNumber(exec, imp->length());
    }
    }
    return 0;
}

void JSPlugin::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<Plugin*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}


JSValue* JSPlugin::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSPlugin* thisObj = static_cast<JSPlugin*>(slot.slotBase());
    return toJS(exec, static_cast<Plugin*>(thisObj->impl())->item(slot.index()));
}
JSC::JSValue* toJS(JSC::ExecState* exec, Plugin* obj)
{
    return cacheDOMObject<Plugin, JSPlugin, JSPluginPrototype>(exec, obj);
}
Plugin* toPlugin(JSC::JSValue* val)
{
    return val->isObject(&JSPlugin::s_info) ? static_cast<JSPlugin*>(val)->impl() : 0;
}

}
