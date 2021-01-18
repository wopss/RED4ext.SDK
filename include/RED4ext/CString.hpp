#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CString
{
    CString();
    CString(const char* aText);

    CString(const CString& aOther);
    CString(CString&&) = delete;

    ~CString();

    CString& operator=(const CString& rhs);
    CString& operator=(CString&& rhs) = delete;

    const char* c_str() const;
    uint32_t Length() const;

private:
#pragma pack(push, 4)
    union
    {
        char* ptr;
        char str[0x14];
    } text; // 00
#pragma pack(pop)

    uint32_t length;   // 14
    uint64_t capacity; // 18
};
RED4EXT_ASSERT_SIZE(CString, 0x20);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CString-inl.hpp>
#endif
