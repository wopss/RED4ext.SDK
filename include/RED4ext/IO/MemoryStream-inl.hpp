#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/IO/MemoryStream.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::MemoryStream::MemoryStream(void* aBuffer, LARGE_INTEGER aLength, LARGE_INTEGER aPointer)
{
    using func_t = MemoryStream* (*)(MemoryStream*, void*, LARGE_INTEGER, LARGE_INTEGER);
    REDfunc<func_t> func(Addresses::Streams_MemoryStream_ctor);

    func(this, aBuffer, aLength, aPointer);
}
