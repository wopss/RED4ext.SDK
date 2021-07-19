#pragma once

#include <RED4ext/IO/BaseStream.hpp>

namespace RED4ext
{
struct MemoryStream : BaseStream
{
    MemoryStream(void* aBuffer, size_t aLength, size_t aPointer = 0);

    // clang-format off
    virtual bool ReadWrite(void* aBuffer, uint32_t aLength) override { return false; }
    virtual size_t GetPointerPosition() override { return -1; }
    virtual size_t GetLength() override { return 0; }
    virtual bool Seek(size_t aDistance) override { return false; }
    virtual bool Flush() override { return false; }
    // clang-format on

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
