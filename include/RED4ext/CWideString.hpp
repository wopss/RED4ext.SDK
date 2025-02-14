#pragma once

#include <stdint.h>
#include <wchar.h>

namespace RED4ext
{
struct CString;
struct CWideString
{
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 33 F6 48 8B FA 48 89 31 48 8B D9 48 89 71 08 48 85
    CWideString(const char* aStr)
    {
        int length;

        this->length = 0;
        this->capacity = 0;
        this->wstr = 0i64;
        if (aStr)
        {
            length = -1i64;
            do
                ++length;
            while (aStr[length]);
            this->length = length;
            if (length)
            {
                Reserve(length);
                int length = this->length;
                for (int i = 0; i < this->length; length = this->length)
                {
                    int64_t v7 = i++;
                    this->wstr[v7] = aStr[v7];
                }
                this->wstr[length] = 0;
            }
        }
    }

    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 33 F6 48 8B FA 48 89 31 48 8B D9 48 89 71 08 48 85
    CWideString(const wchar_t *aWstr)
    {
        uint32_t strLength; // eax

        this->length = 0;
        this->capacity = 0;
        this->wstr = 0i64;
        if ( aWstr )
        {
            strLength = wcslen(aWstr);
            this->length = strLength;
            if ( strLength )
            {
            Reserve(strLength);
            memmove(this->wstr, aWstr, 2i64 * this->length);
            this->wstr[this->length] = 0;
            }
        }
    }

    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 30 8B 02 48 8B F9 48 8B 72 08 89 44 24 20 8B 42 04 89
    CWideString(CWideString& aWStr);

    /// @pattern 8B 02 89 01 8B 42 04 89 41 04 48 8B 42 08 48 89 41 08 33 C0 48 89 02 48 89 42 08 48 8B C1 C3
    CWideString(CWideString&& aCwstr)
    {
        this->length = aCwstr.length;
        this->capacity = aCwstr.capacity;
        this->wstr = aCwstr.wstr;
        aCwstr.length = 0;
        aCwstr.capacity = 0;
        aCwstr.wstr = nullptr;
    }

    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 33 F6 48 8B FA 8B 12 48 8B D9 89 11 89 71 04 48 89
    CWideString(CWideString* a2)
    {
        uint32_t length;
        length = a2->length;
        this->length = 0;
        this->capacity = 0;
        this->wstr = 0i64;
        if (length)
        {
            Reserve(length);
            memmove(this->wstr, a2->wstr, 2i64 * a2->length);
            this->wstr[this->length] = 0;
        }
    }

    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 33 FF 48 8B D9 48 89 39 48 89 79 08 85 D2 74 0C E8 41 03 00 00 48
    CWideString(uint32_t aCapacity)
    {
        this->length = 0;
        this->capacity = 0;
        this->wstr = 0i64;
        if (aCapacity)
        {
            Reserve(aCapacity);
            *this->wstr = 0;
        }
    }

    /// @pattern 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 20 45 33 F6 41 8B F0 4C 89 31 48 8B
    CWideString(const wchar_t* aWstr, uint32_t aLength)
    {
        int64_t length;
        wchar_t* wstr;

        length = aLength;
        this->length = 0i64;
        this->capacity = 0i64;
        this->wstr = 0i64;
        if (aWstr && aLength)
        {
            Reserve(aLength);
            memmove(this->wstr, aWstr, 2 * length);
            wstr = this->wstr;
            this->length = length;
            wstr[length] = 0;
        }
    }

    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B 79 08 48 8B F1 48 8D 4C 24 30 E8 E0 6B 5F FD
    ~CWideString();

    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 30 48 8B F1 8B EA 48 8D 4C 24 40 E8 3D
    void Reserve(uint32_t aCapacity);

    /// @pattern 33 D2 89 11 39 51 04 76 07 48 8B 41 08 66 89 10 C3
    void Clear()
    {
        this->length = 0;
        if (this->capacity)
            *this->wstr = 0;
    }

    /// @pattern 48 8B 41 08 C3
    const wchar_t* c_str() const noexcept
    {
        return wstr;
    }

    /// @pattern 8B 01 C3
    uint32_t Length() const noexcept
    {
        return length;
    }

    /// @pattern 48 89 5C 24 10 56 48 83 EC 20 41 8B F0 48 8B C1 4D 85 C9 75 11 45 85 C0 0F 95 C0 48 8B 5C 24 38
    int8_t FindMaybe(int start_i, int end_i, const wchar_t *needle, int needle_start, int needle_end) const;

    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 8B 02 48 8B D9 8B 49 04 48 8B FA 85 C0 74 62 3B C8 72 15 48 8B 52
    RED4ext::CWideString * CopyFrom(const RED4ext::CWideString *a2);

    /// @pattern 40 55 57 48 83 EC 48 8B EA 48 8B F9 39 51 04 0F 83 F4 00 00 00 48 89 5C 24 68 48 89 74 24 70 4C
    void Resize(uint32_t aLength);

    /// @pattern 48 8B 41 08 8B D2 48 8D 04 50 C3
    wchar_t * GetWideChar(unsigned int index)
    {
        return &wstr[index];
    }

    /// @pattern 40 53 48 81 EC 40 04 00 00 48 8B D9 48 8B CA E8 EC 83 5C FD 48 8B C8 48 8D 54 24 40 41 B8 00 04
    static CString* GetCString(CString* aStr, const CWideString* aWStr);

    [[nodiscard]] const wchar_t* begin() const
    {
        return c_str();
    }

    [[nodiscard]] const wchar_t* end() const
    {
        return c_str() + Length();
    }

    uint32_t length;   // 00
    uint32_t capacity; // 04
    wchar_t* wstr;     // 08
};
} // namespace RED4ext