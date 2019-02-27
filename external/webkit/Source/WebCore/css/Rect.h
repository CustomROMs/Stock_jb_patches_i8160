/*
 * Copyright (C) 1999-2003 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2004, 2005, 2006, 2007, 2008 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef Rect_h
#define Rect_h

#include "CSSPrimitiveValue.h"
#include <wtf/RefPtr.h>

// SAMSUNG CHANGE - Modified some of the functions in this file for CSS3 Ring Mark test cases

namespace WebCore {

    class RectBase {
    public:
        CSSPrimitiveValue* top() const { return m_top.get(); }
        CSSPrimitiveValue* right() const { return m_right.get(); }
        CSSPrimitiveValue* bottom() const { return m_bottom.get(); }
        CSSPrimitiveValue* left() const { return m_left.get(); }

        void setTop(PassRefPtr<CSSPrimitiveValue> top) { m_top = top; }
        void setRight(PassRefPtr<CSSPrimitiveValue> right) { m_right = right; }
        void setBottom(PassRefPtr<CSSPrimitiveValue> bottom) { m_bottom = bottom; }
        void setLeft(PassRefPtr<CSSPrimitiveValue> left) { m_left = left; }

    protected:
        RectBase() { }
        ~RectBase() { }

    private:
        RefPtr<CSSPrimitiveValue> m_top;
        RefPtr<CSSPrimitiveValue> m_right;
        RefPtr<CSSPrimitiveValue> m_bottom;
        RefPtr<CSSPrimitiveValue> m_left;
    };

    class Rect : public RectBase, public RefCounted<Rect> {
    public:
        static PassRefPtr<Rect> create() { return adoptRef(new Rect); }

    private:
        Rect() { }
    };

class Quad : public RectBase, public RefCounted<Quad> {
public:
    static PassRefPtr<Quad> create() { return adoptRef(new Quad); }

private:
    Quad() { }
};

} // namespace WebCore

#endif // Rect_h
