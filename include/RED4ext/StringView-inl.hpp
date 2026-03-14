#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/StringView.hpp>
#endif

#include <RED4ext/String.hpp>

constexpr RED4ext::StringView::StringView(const String& aStr) noexcept
    : m_ptr(aStr.Data())
    , m_size(aStr.Size())
{
}

constexpr bool RED4ext::StringView::operator==(const String& aRhs) const noexcept
{
    return Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator!=(const String& aRhs) const noexcept
{
    return !Compare(aRhs);
}
