#pragma once

#include <RED4ext/MemoryAllocators.hpp>
#include <Windows.h>

namespace RED4ext
{
struct BaseFileStream
{
    virtual IMemoryAllocator* GetAllocator() // 00
    {
        return EngineAllocator::Get();
    }

    virtual ~BaseFileStream() = 0; // 08

    virtual bool ReadWrite(void* aBuffer, uint32_t aLength) = 0; // 10
    virtual LARGE_INTEGER GetPointerPosition() = 0;              // 18
    virtual LARGE_INTEGER GetSize() = 0;                         // 20
    virtual bool Seek(LARGE_INTEGER aDistance) = 0;              // 28
    virtual bool Flush() = 0;                                    // 30

    virtual void sub_38() // 38
    {
        flags &= ~0x80000;
    }

    virtual const char* GetFileName() // 40
    {
        return "<unknown file>";
    }

    int32_t flags; // 08
    int32_t unkC;  // 0C
    int64_t unk10; // 10
    int64_t unk18; // 18
};
} // namespace RED4ext
