#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <cstdint>
#include <string>
#include <string_view>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

namespace red
{

struct String
{
    String(Memory::IAllocator* aAllocator = nullptr);
    String(const char* aText, Memory::IAllocator* aAllocator = nullptr);
    String(const char* aText, uint32_t aLength, Memory::IAllocator* aAllocator = nullptr);
    String(const std::string& aText, Memory::IAllocator* aAllocator = nullptr);
    String(const std::string_view& aText, Memory::IAllocator* aAllocator = nullptr);

    String(const String& aOther);
    String(String&& aOther) noexcept;

    ~String();

    String& operator=(const String& aRhs);
    String& operator=(String&& aRhs) noexcept;

    bool operator==(const char* aRhs) const noexcept;
    bool operator==(const String& aRhs) const noexcept;

    inline bool operator!=(const char* aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    inline bool operator!=(const String& aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    inline const char& operator[](size_t aIndex) const
    {
        return c_str()[aIndex];
    }

    [[nodiscard]] bool IsInline() const noexcept;

    [[nodiscard]] const char* c_str() const noexcept;
    [[nodiscard]] uint32_t Length() const noexcept;

    [[nodiscard]] const char* begin() const
    {
        return c_str();
    }

    [[nodiscard]] const char* end() const
    {
        return c_str() + Length();
    }

#pragma pack(push, 4)
    union
    {
        char inline_str[0x14];
        struct
        {
            char* ptr;
            int8_t unk[8];
            int32_t capacity;
        } str;
    } text; // 00
#pragma pack(pop)

    uint32_t length;               // 14
    Memory::IAllocator* allocator; // 18
};
RED4EXT_ASSERT_SIZE(String, 0x20);
RED4EXT_ASSERT_OFFSET(String, text, 0x00);
RED4EXT_ASSERT_OFFSET(String, length, 0x14);
RED4EXT_ASSERT_OFFSET(String, allocator, 0x18);

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, String>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        // I believe the game uses this implementation for StringView and String?
        std::uint32_t hash{};

        for (const auto i : aKey)
        {
            hash = static_cast<std::uint32_t>(i) + 31u * hash;
        }

        return hash;
    }
};
} // namespace red
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/String-inl.hpp>
#endif
