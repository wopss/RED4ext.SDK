#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Buffer.hpp>
#endif

RED4EXT_INLINE RED4ext::RawBufferAllocator::RawBufferAllocator(Memory::IAllocator* aAllocator)
    : allocator(aAllocator ? *reinterpret_cast<uintptr_t*>(aAllocator) : 0)
{
}

RED4EXT_INLINE void* RED4ext::RawBufferAllocator::ReallocAligned(void* aData, uint32_t aSize, uint32_t aAlignment) const
{
    auto innerAllocator = reinterpret_cast<const Memory::IAllocator*>(&allocator);

    if (!innerAllocator)
        return nullptr;

    Memory::AllocationResult allocation{aData, 0};
    return innerAllocator->ReallocAligned(allocation, aSize, aAlignment).memory;
}

RED4EXT_INLINE void RED4ext::RawBufferAllocator::Free(void* aData) const
{
    auto innerAllocator = reinterpret_cast<const Memory::IAllocator*>(&allocator);

    if (!innerAllocator)
        return;

    Memory::AllocationResult allocation{aData, 0};
    innerAllocator->Free(allocation);
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::RawBufferAllocator::GetAllocator() const
{
    return reinterpret_cast<Memory::IAllocator*>(const_cast<uintptr_t*>(&allocator));
}

RED4EXT_INLINE RED4ext::RawBuffer::RawBuffer()
    : data(nullptr)
    , size(0)
    , alignment(8)
    , allocator{0}
{
}

RED4EXT_INLINE RED4ext::RawBuffer::RawBuffer(void* aData, uint32_t aSize, uint32_t aAlignment)
    : data(aData)
    , size(aSize)
    , alignment(aAlignment)
    , allocator{0}
{
}

RED4EXT_INLINE RED4ext::RawBuffer::~RawBuffer()
{
    if (data && allocator[0])
    {
        reinterpret_cast<RawBufferAllocator*>(&allocator)->Free(data);
    }
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::RawBuffer::GetAllocator() const
{
    if (!allocator[0])
    {
        return nullptr;
    }

    return reinterpret_cast<const RawBufferAllocator*>(&allocator)->GetAllocator();
}

RED4EXT_INLINE void RED4ext::RawBuffer::Initialize(Memory::IAllocator* aAllocator, uint32_t aSize, uint32_t aAlignment)
{
    if (data)
    {
        return;
    }

    if (!aAllocator)
    {
        aAllocator = AllocatorType::Get();
    }

    data = aAllocator->AllocAligned(aSize, aAlignment).memory;
    size = aSize;
    alignment = aAlignment;

    new (reinterpret_cast<RawBufferAllocator*>(&allocator)) RawBufferAllocator(aAllocator);
}

RED4EXT_INLINE void RED4ext::RawBuffer::Resize(uint32_t aSize)
{
    if (!data || !allocator[0])
    {
        return;
    }

    data = reinterpret_cast<RawBufferAllocator*>(&allocator)->ReallocAligned(data, aSize, alignment);
    size = aSize;
}

RED4EXT_INLINE RED4ext::RawBuffer::operator bool() const noexcept
{
    return data;
}

RED4EXT_INLINE RED4ext::SharedPtr<RED4ext::DeferredDataBufferToken> RED4ext::DeferredDataBuffer::LoadAsync()
{
    using LoadBufferAsync_t = JobHandle* (*)(DeferredDataBuffer*, JobHandle*, int64_t);
    static UniversalRelocFunc<LoadBufferAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadAsync);

    JobHandle loadingJob;
    func(this, &loadingJob, 0);

    return MakeShared<DeferredDataBufferToken>(*this, loadingJob);
}

RED4EXT_INLINE RED4ext::SharedPtr<RED4ext::DeferredDataBufferCopyToken> RED4ext::DeferredDataBuffer::LoadCopyAsync()
{
    using LoadBufferRefAsync_t = void* (*)(DeferredDataBuffer*, SharedPtr<DeferredDataBufferCopyToken>*, int8_t);
    static UniversalRelocFunc<LoadBufferRefAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadRefAsync);

    SharedPtr<DeferredDataBufferCopyToken> token;
    func(this, &token, 0);

    return token;
}

RED4EXT_INLINE RED4ext::DeferredDataBufferToken::DeferredDataBufferToken(DeferredDataBuffer& aBuffer,
                                                                         JobHandle& aJob) noexcept
    : buffer(aBuffer)
    , job(aJob)
{
}

RED4EXT_INLINE void RED4ext::DeferredDataBufferToken::OnLoaded(LoadedCallback&& aCallback)
{
    JobQueue jobQueue;
    jobQueue.Wait(job);
    jobQueue.Dispatch([self = MakeShared<DeferredDataBufferToken>(*this), callback = std::move(aCallback)]()
                      { callback(self->buffer); });
}

RED4EXT_INLINE RED4ext::DeferredDataBufferCopyToken::~DeferredDataBufferCopyToken()
{
    using DestructUnk28_t = void (*)(void**);
    static UniversalRelocFunc<DestructUnk28_t> DestructUnk28(Detail::AddressHashes::ResourceToken_DestructUnk38);
    DestructUnk28(&unk28);
}

RED4EXT_INLINE void RED4ext::DeferredDataBufferCopyToken::OnLoaded(LoadedCallback&& aCallback) const
{
    JobQueue jobQueue;
    jobQueue.Wait(job);
    jobQueue.Dispatch([self = self.Lock(), callback = std::move(aCallback)]() { callback(self); });
}
