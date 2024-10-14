#pragma once

#include <RED4ext/Common.hpp>

#include <string_view>

namespace RED4ext
{
struct CString;

#pragma pack(push, 4)
struct StringView
{
    constexpr StringView() noexcept;
    constexpr StringView(const char* aStr) noexcept;
    constexpr StringView(std::string_view aView) noexcept;
    StringView(const RED4ext::CString& aStr) noexcept;

    constexpr bool IsEmpty() const noexcept;
    constexpr operator bool() const noexcept;

    constexpr bool operator==(const StringView& aRhs) const noexcept;
    constexpr bool operator!=(const StringView& aRhs) const noexcept;
    constexpr bool operator==(const char* aRhs) const noexcept;
    constexpr bool operator!=(const char* aRhs) const noexcept;
    constexpr bool operator==(std::string_view aRhs) const noexcept;
    constexpr bool operator!=(std::string_view aRhs) const noexcept;
    bool operator==(const RED4ext::CString& aRhs) const noexcept;
    bool operator!=(const RED4ext::CString& aRhs) const noexcept;

    constexpr char operator[](std::size_t aIndex) const noexcept;

    constexpr const char* Data() const noexcept;
    constexpr std::uint32_t Length() const noexcept;

    constexpr const char* begin() const noexcept;
    constexpr const char* end() const noexcept;

    const char* ptr;
    std::uint32_t length;
};
#pragma pack(pop)

RED4EXT_ASSERT_SIZE(StringView, 0xC);
RED4EXT_ASSERT_OFFSET(StringView, ptr, 0x0);
RED4EXT_ASSERT_OFFSET(StringView, length, 0x8);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/StringView-inl.hpp>
#endif // !RED4EXT_STATIC_LIB
