#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/JobQueue.hpp>
#endif

#include <cstdint>
#include <memory>

#include <Windows.h>

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/TLS.hpp>

RED4EXT_INLINE void RED4ext::JobInternals::SetLocalThreadParam(uint8_t aParam)
{
    auto tls = TLS::Get();
    tls->jobParam = aParam;
}

RED4EXT_INLINE RED4ext::JobFamily::JobFamily(const char* aName) noexcept
    : name(aName)
    , unk08("src")
    , unk10("func")
    , unk18(1)
    , unk1C(0)
    , unk20(0)
    , unk24(0)
    , hash(FNV1a32(name))
    , unk2C(0)
    , unk30(0)
    , unk34(1)
    , unk38(0)
    , unk3C(0)
{
}

RED4EXT_INLINE RED4ext::JobParamSet::JobParamSet() noexcept
    : unk00(0)
    , unk01(0)
    , unk02(255)
{
}

RED4EXT_INLINE RED4ext::JobHandle::JobHandle(uintptr_t aUnk)
{
    AcquireInternalHandle(aUnk);
}

RED4EXT_INLINE RED4ext::JobHandle::JobHandle(const JobHandle& aOther)
{
    CopyInternalHandle(aOther);
}

RED4EXT_INLINE RED4ext::JobHandle::JobHandle(JobHandle&& aOther) noexcept
{
    MoveInternalHandle(aOther);
}

RED4EXT_INLINE RED4ext::JobHandle& RED4ext::JobHandle::operator=(const JobHandle& aOther)
{
    if (this != std::addressof(aOther))
    {
        ReleaseInternalHandle();
        CopyInternalHandle(aOther);
    }

    return *this;
}

RED4EXT_INLINE RED4ext::JobHandle& RED4ext::JobHandle::operator=(JobHandle&& aOther) noexcept
{
    if (this != std::addressof(aOther))
    {
        ReleaseInternalHandle();
        MoveInternalHandle(aOther);
    }

    return *this;
}

RED4EXT_INLINE RED4ext::JobHandle::~JobHandle()
{
    ReleaseInternalHandle();
}

RED4EXT_INLINE void RED4ext::JobHandle::Join(const JobHandle& aOther)
{
    using func_t = void (*)(JobHandle*, const JobHandle&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobHandle_Join);

    func(this, aOther);
}

RED4EXT_INLINE void RED4ext::JobHandle::AcquireInternalHandle(uintptr_t aUnk)
{
    using func_t = JobInternalHandle* (*)(void*, uintptr_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobInternalHandle_Acquire);

    internal = func(nullptr, aUnk);
}

RED4EXT_INLINE void RED4ext::JobHandle::CopyInternalHandle(const JobHandle& aOther)
{
    internal = aOther.internal;
    InterlockedExchangeAdd(&internal->unk1C, static_cast<uint32_t>(1));
}

RED4EXT_INLINE void RED4ext::JobHandle::MoveInternalHandle(JobHandle& aOther)
{
    internal = aOther.internal;
    aOther.internal = nullptr;
}

RED4EXT_INLINE void RED4ext::JobHandle::ReleaseInternalHandle()
{
    if (internal)
    {
        using func_t = void (*)(JobHandle*);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobHandle_dtor);

        func(this);
    }
}

RED4EXT_INLINE RED4ext::JobQueue::JobQueue(const JobGroup& aGroup)
{
    using func_t = JobQueue* (*)(JobQueue*, const JobGroup&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobQueue_ctor_FromGroup);

    func(this, aGroup);
}

RED4EXT_INLINE RED4ext::JobQueue::JobQueue(JobParamSet aParams, uintptr_t aUnk)
{
    using func_t = JobQueue* (*)(JobQueue*, uint8_t, uint8_t, uint64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobQueue_ctor_FromParams);

    func(this, aParams.unk00, aParams.unk01, aUnk);
}

RED4EXT_INLINE RED4ext::JobQueue::~JobQueue()
{
    using func_t = void (*)(JobQueue*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobQueue_dtor);

    func(this);
}

RED4EXT_INLINE void RED4ext::JobQueue::Wait(const JobHandle& aJob)
{
    unk10.Join(aJob);
}

[[nodiscard]] RED4EXT_INLINE RED4ext::JobHandle RED4ext::JobQueue::Capture()
{
    using func_t = JobHandle* (*)(JobQueue*, JobHandle*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobQueue_Capture);

    JobHandle handle{};
    func(this, &handle);

    return handle;
}

RED4EXT_INLINE void RED4ext::JobQueue::DispatchJob(const JobInstance& aJob)
{
    using func_t = uint32_t (*)(void*, const JobInstance&, uint8_t, JobInternalHandle*, JobInternalHandle*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobDispatcher_DispatchJob);
    static UniversalRelocPtr<void*> dispatcher(Detail::AddressHashes::JobDispatcher);

    func(dispatcher, aJob, params.unk00, unk10.internal, unk18.internal);
}

RED4EXT_INLINE void RED4ext::JobQueue::SyncWait()
{
    using func_t = void (*)(JobQueue*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::JobQueue_SyncWait);

    func(this);
}
