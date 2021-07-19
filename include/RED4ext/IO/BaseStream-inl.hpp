#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/IO/BaseStream.hpp>
#endif

#include <RED4ext/MemoryAllocators.hpp>

RED4EXT_INLINE RED4ext::BaseStream::BaseStream(int32_t aFlags)
    : flags(aFlags)
    , unkC(0xC3)
    , unk10(0)
    , unk18(0)
{
}

RED4EXT_INLINE RED4ext::IMemoryAllocator* RED4ext::BaseStream::GetAllocator()
{
    return RED4ext::EngineAllocator::Get();
}

RED4EXT_INLINE void RED4ext::BaseStream::sub_38()
{
    flags &= ~0x80000;
}

RED4EXT_INLINE const char* RED4ext::BaseStream::GetFileName()
{
    return "<unknown file>";
}
