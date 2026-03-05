#pragma once

#include <RED4ext/Common.hpp>

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

    constexpr StringView() noexcept;
    constexpr StringView(ConstPointer aStr) noexcept;
    constexpr StringView(std::string_view aView) noexcept;
    StringView(const String& aStr) noexcept;

    constexpr operator bool() const noexcept;

    constexpr bool operator==(StringView aRhs) const noexcept;
    constexpr bool operator!=(StringView aRhs) const noexcept;
    constexpr bool operator==(ConstPointer aRhs) const noexcept;
    constexpr bool operator!=(ConstPointer aRhs) const noexcept;
    constexpr bool operator==(std::string_view aRhs) const noexcept;
    constexpr bool operator!=(std::string_view aRhs) const noexcept;
    bool operator==(const String& aRhs) const noexcept;
    bool operator!=(const String& aRhs) const noexcept;

    constexpr ConstReference operator[](SizeType aIndex) const noexcept;

    [[nodiscard]] constexpr ConstReference At(SizeType aIndex) const;

    [[nodiscard]] constexpr bool Compare(StringView aOther) const noexcept;

    [[nodiscard]] constexpr ConstReference Front() const noexcept;
    [[nodiscard]] constexpr ConstReference Back() const noexcept;

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept;
    [[nodiscard]] constexpr ConstIterator End() const noexcept;
    [[nodiscard]] constexpr ConstReverseIterator RBegin() const noexcept;
    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept;

    [[nodiscard]] constexpr bool IsEmpty() const noexcept;

    [[nodiscard]] constexpr ConstPointer Data() const noexcept;
    [[nodiscard]] constexpr SizeType Size() const noexcept;
    [[nodiscard]] constexpr SizeType Length() const noexcept;

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
    const char* m_ptr;
    std::uint32_t m_size;
};
#pragma pack(pop)

RED4EXT_ASSERT_SIZE(StringView, 0xC);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/StringView-inl.hpp>
#endif // !RED4EXT_STATIC_LIB
