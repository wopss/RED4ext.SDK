#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/StringView.hpp>
#endif

#include <RED4ext/CString.hpp>

RED4EXT_INLINE constexpr RED4ext::StringView::StringView() noexcept
    : ptr(nullptr)
    , length(0u)
{
}

RED4EXT_INLINE constexpr RED4ext::StringView::StringView(const char* aStr) noexcept
    : ptr(aStr)
    , length(static_cast<std::uint32_t>(std::char_traits<char>::length(aStr)))
{
}

RED4EXT_INLINE constexpr RED4ext::StringView::StringView(std::string_view aView) noexcept
    : ptr(aView.data())
    , length(static_cast<std::uint32_t>(aView.length()))
{
}

RED4EXT_INLINE RED4ext::StringView::StringView(const RED4ext::CString& aStr) noexcept
    : ptr(aStr.c_str())
    , length(aStr.Length())
{
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::IsEmpty() const noexcept
{
    return !ptr || length == 0u;
}

RED4EXT_INLINE constexpr RED4ext::StringView::operator bool() const noexcept
{
    return !IsEmpty();
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator==(const StringView& aRhs) const noexcept
{
    return Length() == aRhs.Length() && std::char_traits<char>::compare(Data(), aRhs.Data(), Length()) == 0;
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator!=(const StringView& aRhs) const noexcept
{
    return !(*this == aRhs);
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator==(const char* aRhs) const noexcept
{
    return *this == StringView{aRhs};
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator!=(const char* aRhs) const noexcept
{
    return *this != StringView{aRhs};
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator==(std::string_view aRhs) const noexcept
{
    return *this == StringView{aRhs};
}

RED4EXT_INLINE constexpr bool RED4ext::StringView::operator!=(std::string_view aRhs) const noexcept
{
    return *this != StringView{aRhs};
}

RED4EXT_INLINE bool RED4ext::StringView::operator==(const RED4ext::CString& aRhs) const noexcept
{
    return *this == StringView{aRhs};
}

RED4EXT_INLINE bool RED4ext::StringView::operator!=(const RED4ext::CString& aRhs) const noexcept
{
    return *this != StringView{aRhs};
}

RED4EXT_INLINE constexpr char RED4ext::StringView::operator[](std::size_t aIndex) const noexcept
{
    return Data()[aIndex];
}

RED4EXT_INLINE constexpr const char* RED4ext::StringView::Data() const noexcept
{
    return ptr;
}

RED4EXT_INLINE constexpr std::uint32_t RED4ext::StringView::Length() const noexcept
{
    return length;
}

RED4EXT_INLINE constexpr const char* RED4ext::StringView::begin() const noexcept
{
    return Data();
}

RED4EXT_INLINE constexpr const char* RED4ext::StringView::end() const noexcept
{
    return Data() + Length();
}
