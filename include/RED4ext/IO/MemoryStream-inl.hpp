#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/IO/MemoryStream.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE void RED4ext::MemoryStream::Construct(MemoryStream* aThis, void* aBuffer, size_t aLength, size_t aPointer)
{
    using func_t = MemoryStream* (*)(MemoryStream*, void*, size_t, size_t);
    RelocFunc<func_t> func(Addresses::Streams_MemoryStream_ctor);

    func(aThis, aBuffer, aLength, aPointer);
}
