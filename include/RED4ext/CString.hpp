#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

struct CString
{
    CString(Memory::IAllocator* aAllocator = nullptr);
    CString(const char* aText, Memory::IAllocator* aAllocator = nullptr);

    CString(const CString& aOther);
    CString(CString&& aOther) noexcept;

    ~CString();

    CString& operator=(const CString& aRhs);
    CString& operator=(CString&& aRhs) noexcept;

    bool operator==(const char* aRhs) const noexcept;
    bool operator==(const CString& aRhs) const noexcept;

    inline bool operator!=(const char* aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    inline bool operator!=(const CString& aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    bool IsInline() const;

    const char* c_str() const;
    uint32_t Length() const;

#pragma pack(push, 4)
    union
    {
        char str[0x14];
        struct
        {
            char* ptr;
            int8_t unk[8];
            int32_t capacity;
        };
    } text; // 00
#pragma pack(pop)

    uint32_t length;               // 14
    Memory::IAllocator* allocator; // 18
};
RED4EXT_ASSERT_SIZE(CString, 0x20);
RED4EXT_ASSERT_OFFSET(CString, length, 0x14);
RED4EXT_ASSERT_OFFSET(CString, allocator, 0x18);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CString-inl.hpp>
#endif
