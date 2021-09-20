#pragma once

#include <Windows.h>
#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace Memory
{
struct EngineAllocator;
}

struct BaseStream
{
    BaseStream(int32_t aFlags = 0);

    virtual Memory::EngineAllocator* GetAllocator(); // 00
    virtual ~BaseStream() = default;                 // 08

    virtual void* ReadWrite(void* aBuffer, uint32_t aLength) = 0; // 10
    virtual size_t GetPointerPosition() = 0;                      // 18
    virtual size_t GetLength() = 0;                               // 20
    virtual bool Seek(size_t aDistance) = 0;                      // 28
    virtual bool Flush() = 0;                                     // 30
    virtual void sub_38();                                        // 38
    virtual const char* GetFileName();                            // 40

    template<typename T>
    inline void* ReadWriteEx(T* aBuffer)
    {
        return ReadWrite(aBuffer, sizeof(T));
    }

    int32_t flags; // 08
    int32_t unkC;  // 0C
    int64_t unk10; // 10
    int64_t unk18; // 18
};
RED4EXT_ASSERT_SIZE(BaseStream, 0x20);
RED4EXT_ASSERT_OFFSET(BaseStream, flags, 0x8);
RED4EXT_ASSERT_OFFSET(BaseStream, unkC, 0xC);
RED4EXT_ASSERT_OFFSET(BaseStream, unk10, 0x10);
RED4EXT_ASSERT_OFFSET(BaseStream, unk18, 0x18);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/IO/BaseStream-inl.hpp>
#endif
