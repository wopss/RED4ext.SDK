#pragma once

#include <RED4ext/IO/BaseStream.hpp>

namespace RED4ext
{
struct MemoryStream : BaseStream
{
    static void Construct(MemoryStream* aThis, void* aBuffer, size_t aLength, size_t aPointer = 0);

    void* buffer;   // 20
    size_t length;  // 28
    size_t pointer; // 30
};
RED4EXT_ASSERT_SIZE(MemoryStream, 0x38);
RED4EXT_ASSERT_OFFSET(MemoryStream, buffer, 0x20);
RED4EXT_ASSERT_OFFSET(MemoryStream, length, 0x28);
RED4EXT_ASSERT_OFFSET(MemoryStream, pointer, 0x30);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/IO/MemoryStream-inl.hpp>
#endif
