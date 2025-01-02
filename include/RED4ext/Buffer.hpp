#pragma once

#include <cstdint>

#include <RED4ext/Callback.hpp>
#include <RED4ext/JobQueue.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>

namespace RED4ext
{
struct RawBufferAllocator
{
    RawBufferAllocator(Memory::IAllocator* aAllocator);

    virtual void* ReallocAligned(void* aData, uint32_t aSize, uint32_t aAlignment) const; // 00
    virtual void Free(void* aData) const;                                                 // 08
    virtual Memory::IAllocator* GetAllocator() const;                                     // 10

    uintptr_t allocator;
};
RED4EXT_ASSERT_SIZE(RawBufferAllocator, 0x10);

struct RawBuffer
{
    using AllocatorType = Memory::EngineAllocator;

    RawBuffer();
    RawBuffer(void* aData, uint32_t aSize, uint32_t aAlignment = 8);
    RawBuffer(const RawBuffer&) = delete;
    RawBuffer(RawBuffer&&) = default;
    ~RawBuffer();

    Memory::IAllocator* GetAllocator() const;
    void Initialize(Memory::IAllocator* aAllocator, uint32_t aSize, uint32_t aAlignment = 8);
    void Resize(uint32_t aSize);

    operator bool() const noexcept;

    void* data;            // 00
    uint32_t size;         // 08
    uint32_t alignment;    // 0C
    uint64_t allocator[2]; // 10
};
RED4EXT_ASSERT_SIZE(RawBuffer, 0x20);

struct DataBuffer
{
    RawBuffer buffer; // 00
    uint64_t unk20;   // 20 - Pointer to something
};
RED4EXT_ASSERT_SIZE(DataBuffer, 0x28);

struct SharedDataBuffer
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(SharedDataBuffer, 0x8);

struct DeferredDataBufferToken;
struct DeferredDataBufferCopyToken;

enum class DeferredDataBufferState : uint8_t
{
    Unloaded = 0,
    Loading = 1,
    Loaded = 2,
};

struct DeferredDataBuffer
{
    SharedPtr<DeferredDataBufferToken> LoadAsync();
    SharedPtr<DeferredDataBufferCopyToken> LoadCopyAsync();

    RawBuffer temp;                // 00 - Can be used during loading
    SharedPtr<RawBuffer> raw;      // 20 - Loaded data
    void* unk30;                   // 30
    uint8_t unk38;                 // 38
    uint64_t unk40;                // 40
    uint64_t unk48;                // 48
    uint32_t unk50;                // 50
    DeferredDataBufferState state; // 54
    SharedSpinLock lock;           // 55
    uint16_t unk56;                // 56
};
RED4EXT_ASSERT_SIZE(DeferredDataBuffer, 0x58);
RED4EXT_ASSERT_OFFSET(DeferredDataBuffer, raw, 0x20);
RED4EXT_ASSERT_OFFSET(DeferredDataBuffer, state, 0x54);
RED4EXT_ASSERT_OFFSET(DeferredDataBuffer, lock, 0x55);

struct DeferredDataBufferToken
{
    using AllocatorType = Memory::EngineAllocator;
    using LoadedCallback = Callback<void (*)(DeferredDataBuffer&)>;

    DeferredDataBufferToken(DeferredDataBuffer& aBuffer, JobHandle& aJob) noexcept;
    DeferredDataBufferToken(const DeferredDataBufferToken&) = default;
    DeferredDataBufferToken(DeferredDataBufferToken&&) = default;

    void OnLoaded(LoadedCallback&& aCallback);

    DeferredDataBuffer& buffer;
    JobHandle job;
};

struct DeferredDataBufferCopyToken
{
    using AllocatorType = Memory::EngineAllocator;
    using LoadedCallback = Callback<void (*)(const SharedPtr<DeferredDataBufferCopyToken>&)>;

    ~DeferredDataBufferCopyToken();

    void OnLoaded(LoadedCallback&& aCallback) const;

    WeakPtr<DeferredDataBufferCopyToken> self; // 00
    JobHandle job;                             // 10
    SharedPtr<RawBuffer> raw;                  // 18
    void* unk28;                               // 28 - SharedPtr.instance
    void* unk30;                               // 30 - SharedPtr.refCount
};
RED4EXT_ASSERT_SIZE(DeferredDataBufferCopyToken, 0x38);
RED4EXT_ASSERT_OFFSET(DeferredDataBufferCopyToken, job, 0x10);
RED4EXT_ASSERT_OFFSET(DeferredDataBufferCopyToken, raw, 0x18);
RED4EXT_ASSERT_OFFSET(DeferredDataBufferCopyToken, unk28, 0x28);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Buffer-inl.hpp>
#endif
