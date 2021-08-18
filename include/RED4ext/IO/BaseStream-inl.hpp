#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/IO/BaseStream.hpp>
#endif

#include <RED4ext/Memory/Allocators.hpp>

RED4EXT_INLINE RED4ext::BaseStream::BaseStream(int32_t aFlags)
    : flags(aFlags)
    , unkC(0xC3)
    , unk10(0)
    , unk18(0)
{
}

RED4EXT_INLINE RED4ext::Memory::EngineAllocator* RED4ext::BaseStream::GetAllocator()
{
    static RED4ext::Memory::EngineAllocator allocator;
    return &allocator;
}

RED4EXT_INLINE void RED4ext::BaseStream::sub_38()
{
    flags &= ~0x80000;
}

RED4EXT_INLINE const char* RED4ext::BaseStream::GetFileName()
{
    return "<unknown file>";
}
