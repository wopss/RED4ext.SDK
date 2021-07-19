#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/IO/MemoryStream.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::MemoryStream::MemoryStream(void* aBuffer, size_t aLength, size_t aPointer)
{
    using func_t = MemoryStream* (*)(MemoryStream*, void*, size_t, size_t);
    REDfunc<func_t> func(Addresses::Streams_MemoryStream_ctor);

    func(this, aBuffer, aLength, aPointer);
}
