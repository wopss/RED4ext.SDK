#pragma once

#include <RED4ext/IO/BaseStream.hpp>

namespace RED4ext
{
struct MemoryStream : BaseStream
{
    MemoryStream(void* aBuffer, LARGE_INTEGER aLength, LARGE_INTEGER aPointer = {0});

    using BaseStream::ReadWrite;

    virtual bool ReadWrite(void* aBuffer, uint32_t aLength) override { return false; }
    virtual LARGE_INTEGER GetPointerPosition() override { return {}; }
    virtual LARGE_INTEGER GetLength() override { return {}; }
    virtual bool Seek(LARGE_INTEGER aDistance) override { return false; }
    virtual bool Flush() override { return false; }

    void* buffer;          // 20
    LARGE_INTEGER length;  // 28
    LARGE_INTEGER pointer; // 30
};
RED4EXT_ASSERT_SIZE(MemoryStream, 0x38);
RED4EXT_ASSERT_OFFSET(MemoryStream, buffer, 0x20);
RED4EXT_ASSERT_OFFSET(MemoryStream, length, 0x28);
RED4EXT_ASSERT_OFFSET(MemoryStream, pointer, 0x30);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/IO/MemoryStream-inl.hpp>
#endif
