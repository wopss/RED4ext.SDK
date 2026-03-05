#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/StringView.hpp>
#endif

#include <RED4ext/String.hpp>

constexpr RED4ext::StringView::StringView() noexcept
    : m_ptr(nullptr)
    , m_size(0u)
{
}

constexpr RED4ext::StringView::StringView(ConstPointer aStr) noexcept
    : m_ptr(aStr)
    , m_size(static_cast<SizeType>(TraitsType::length(aStr)))
{
}

constexpr RED4ext::StringView::StringView(std::string_view aView) noexcept
    : m_ptr(aView.data())
    , m_size(static_cast<SizeType>(aView.size()))
{
}

RED4EXT_INLINE RED4ext::StringView::StringView(const String& aStr) noexcept
    : m_ptr(aStr.Data())
    , m_size(aStr.Size())
{
}

constexpr bool RED4ext::StringView::IsEmpty() const noexcept
{
    return m_size == 0u;
}

constexpr RED4ext::StringView::operator bool() const noexcept
{
    return !IsEmpty();
}

constexpr bool RED4ext::StringView::operator==(StringView aRhs) const noexcept
{
    return Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator!=(StringView aRhs) const noexcept
{
    return !Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator==(ConstPointer aRhs) const noexcept
{
    return Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator!=(ConstPointer aRhs) const noexcept
{
    return !Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator==(std::string_view aRhs) const noexcept
{
    return Compare(aRhs);
}

constexpr bool RED4ext::StringView::operator!=(std::string_view aRhs) const noexcept
{
    return !Compare(aRhs);
}

RED4EXT_INLINE bool RED4ext::StringView::operator==(const String& aRhs) const noexcept
{
    return Compare(aRhs);
}

RED4EXT_INLINE bool RED4ext::StringView::operator!=(const String& aRhs) const noexcept
{
    return !Compare(aRhs);
}

constexpr RED4ext::StringView::ConstReference RED4ext::StringView::operator[](SizeType aIndex) const noexcept
{
    return m_ptr[aIndex];
}

constexpr RED4ext::StringView::ConstReference RED4ext::StringView::At(SizeType aIndex) const
{
    if (aIndex >= m_size)
        throw std::out_of_range("StringView::At: Position out of range");

    return m_ptr[aIndex];
}

constexpr bool RED4ext::StringView::Compare(StringView aOther) const noexcept
{
    if (IsEmpty() && aOther.IsEmpty())
        return true;

    if (m_size != aOther.m_size)
        return false;

    return TraitsType::compare(m_ptr, aOther.m_ptr, m_size) == 0;
}

constexpr RED4ext::StringView::ConstReference RED4ext::StringView::Front() const noexcept
{
    assert(!IsEmpty());
    return m_ptr[0];
}

constexpr RED4ext::StringView::ConstReference RED4ext::StringView::Back() const noexcept
{
    assert(!IsEmpty());
    return m_ptr[m_size - 1];
}

constexpr RED4ext::StringView::ConstIterator RED4ext::StringView::Begin() const noexcept
{
    return m_ptr;
}

constexpr RED4ext::StringView::ConstIterator RED4ext::StringView::End() const noexcept
{
    return m_ptr + m_size;
}

constexpr RED4ext::StringView::ConstReverseIterator RED4ext::StringView::RBegin() const noexcept
{
    return ConstReverseIterator(Begin());
}

constexpr RED4ext::StringView::ConstReverseIterator RED4ext::StringView::REnd() const noexcept
{
    return ConstReverseIterator(End());
}

constexpr RED4ext::StringView::ConstPointer RED4ext::StringView::Data() const noexcept
{
    return m_ptr;
}

constexpr RED4ext::StringView::SizeType RED4ext::StringView::Size() const noexcept
{
    return m_size;
}

constexpr RED4ext::StringView::SizeType RED4ext::StringView::Length() const noexcept
{
    return m_size;
}
