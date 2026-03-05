#pragma once

#include <RED4ext/Common.hpp>

#include <cassert>
#include <stdexcept>
#include <string_view>

namespace RED4ext
{
class String;

#pragma pack(push, 4)
class StringView
{
public:
    using ValueType = char;
    using Reference = ValueType&;
    using ConstReference = const ValueType&;
    using Pointer = ValueType*;
    using ConstPointer = const ValueType*;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Pointer;
    using ConstIterator = ConstPointer;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    using TraitsType = std::char_traits<ValueType>;

    constexpr StringView() noexcept = default;

    constexpr StringView(ConstPointer aStr) noexcept
        : m_ptr(aStr)
        , m_size(static_cast<SizeType>(TraitsType::length(aStr)))
    {
    }

    constexpr StringView(std::string_view aView) noexcept
        : m_ptr(aView.data())
        , m_size(static_cast<SizeType>(aView.size()))
    {
    }

    StringView(const String& aStr) noexcept;
    bool operator==(const String& aRhs) const noexcept;
    bool operator!=(const String& aRhs) const noexcept;

    constexpr bool operator==(StringView aRhs) const noexcept
    {
        return Compare(aRhs);
    }

    constexpr bool operator!=(StringView aRhs) const noexcept
    {
        return !Compare(aRhs);
    }

    constexpr bool operator==(ConstPointer aRhs) const noexcept
    {
        return Compare(aRhs);
    }

    constexpr bool operator!=(ConstPointer aRhs) const noexcept
    {
        return !Compare(aRhs);
    }

    constexpr bool operator==(std::string_view aRhs) const noexcept
    {
        return Compare(aRhs);
    }

    constexpr bool operator!=(std::string_view aRhs) const noexcept
    {
        return !Compare(aRhs);
    }

    constexpr operator bool() const noexcept
    {
        return !IsEmpty();
    }

    constexpr ConstReference operator[](SizeType aIndex) const noexcept
    {
        return m_ptr[aIndex];
    }

    [[nodiscard]] constexpr bool Compare(StringView aOther) const noexcept
    {
        if (IsEmpty() && aOther.IsEmpty())
            return true;

        if (m_size != aOther.m_size)
            return false;

        return TraitsType::compare(m_ptr, aOther.m_ptr, m_size) == 0;
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= m_size)
        throw std::out_of_range("StringView::At: Position out of range");

        return m_ptr[aIndex];
    }

    [[nodiscard]] constexpr ConstReference Front() const noexcept
    {
        assert(!IsEmpty());
        return m_ptr[0];
    }

    [[nodiscard]] constexpr ConstReference Back() const noexcept
    {
        assert(!IsEmpty());
        return m_ptr[m_size - 1];
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return m_ptr;
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return m_ptr + m_size;
    }

    [[nodiscard]] constexpr ConstReverseIterator RBegin() const noexcept
    {
        return ConstReverseIterator(Begin());
    }

    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
    }

    [[nodiscard]] constexpr bool IsEmpty() const noexcept
    {
        return m_size == 0u;
    }

    [[nodiscard]] constexpr ConstPointer Data() const noexcept
    {
        return m_ptr;
    }

    [[nodiscard]] constexpr SizeType Size() const noexcept
    {
        return m_size;
    }

    [[nodiscard]] constexpr SizeType Length() const noexcept
    {
        return m_size;
    }

#pragma region STL
    using value_type = ValueType;
    using reference = Reference;
    using const_reference = ConstReference;
    using pointer = Pointer;
    using const_pointer = ConstPointer;

    using size_type = SizeType;
    using difference_type = DifferenceType;

    using iterator = Iterator;
    using const_iterator = ConstIterator;
    using reverse_iterator = ReverseIterator;
    using const_reverse_iterator = ConstReverseIterator;

    using traits_type = TraitsType;

    [[nodiscard]] constexpr size_type size() const noexcept
    {
        return Size();
    }

    [[nodiscard]] constexpr const_iterator begin() const noexcept
    {
        return Begin();
    }
    [[nodiscard]] constexpr const_iterator end() const noexcept
    {
        return End();
    }
#pragma endregion
private:
    const char* m_ptr {nullptr};
    std::uint32_t m_size {0};
};
#pragma pack(pop)

RED4EXT_ASSERT_SIZE(StringView, 0xC);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/StringView-inl.hpp>
#endif // !RED4EXT_STATIC_LIB
