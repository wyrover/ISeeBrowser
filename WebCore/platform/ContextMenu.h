/*
 * Copyright (C) 2006 Apple Computer, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef ContextMenu_h
#define ContextMenu_h

#include <wtf/Noncopyable.h>

#include "ContextMenuItem.h"
#include "HitTestResult.h"
#include "PlatformMenuDescription.h"
#include "PlatformString.h"
#if PLATFORM(MAC)
#include <wtf/RetainPtr.h>
#elif PLATFORM(QT)
#include <QMenu>
#endif

namespace WebCore {
class MenuEventProxy;

    class ContextMenuController;

    class ContextMenu : Noncopyable
    {
    public:
        ContextMenu(const HitTestResult&);
        ContextMenu(const HitTestResult&, const PlatformMenuDescription);
        ~ContextMenu();

        void populate();
        void addInspectElementItem();
        void checkOrEnableIfNeeded(ContextMenuItem&) const;

        void insertItem(unsigned position, ContextMenuItem&);
        void appendItem(ContextMenuItem&);
        
        ContextMenuItem* itemWithAction(unsigned);
        ContextMenuItem* itemAtIndex(unsigned, const PlatformMenuDescription);

        unsigned itemCount() const;

        HitTestResult hitTestResult() const { return m_hitTestResult; }
        ContextMenuController* controller() const;

        PlatformMenuDescription platformDescription() const;
        void setPlatformDescription(PlatformMenuDescription);

        PlatformMenuDescription releasePlatformDescription();

    private:
        HitTestResult m_hitTestResult;

#if PLATFORM(MAC)
        // Keep this in sync with the PlatformMenuDescription typedef
        RetainPtr<NSMutableArray> m_platformDescription;
#elif PLATFORM(QT)
        QList<ContextMenuItem> m_items;
#else
        PlatformMenuDescription m_platformDescription;
#endif
    };

}

#endif // ContextMenu_h
