#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/JobQueue.hpp>
#endif

#include <RED4ext/Addresses.hpp>
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

RED4EXT_INLINE RED4ext::JobHandle::JobHandle(JobParamSet aParams, uintptr_t aUnk)
    : unk00(nullptr)
{
    using func_t = void (*)(JobHandle*, JobParamSet&, uintptr_t);
    RelocFunc<func_t> func(Addresses::JobHandle_ctor);

    func(this, aParams, aUnk);
}

RED4EXT_INLINE RED4ext::JobHandle::~JobHandle()
{
    using func_t = void (*)(JobHandle*);
    RelocFunc<func_t> func(Addresses::JobHandle_dtor);

    func(this);
}

RED4EXT_INLINE void RED4ext::JobHandle::Join(const JobHandle& aOther)
{
    using func_t = void (*)(JobHandle*, const JobHandle&);
    RelocFunc<func_t> func(Addresses::JobHandle_Join);

    func(this, aOther);
}

RED4EXT_INLINE RED4ext::JobQueue::JobQueue(const JobGroup& aGroup)
{
    using func_t = JobQueue* (*)(JobQueue*, const JobGroup&);
    RelocFunc<func_t> func(Addresses::JobQueue_ctor_FromGroup);

    func(this, aGroup);
}

RED4EXT_INLINE RED4ext::JobQueue::JobQueue(JobParamSet aParams, uintptr_t aUnk)
{
    using func_t = JobQueue* (*)(JobQueue*, JobParamSet&, uint64_t);
    RelocFunc<func_t> func(Addresses::JobQueue_ctor_FromParams);

    func(this, aParams, aUnk);
}

RED4EXT_INLINE RED4ext::JobQueue::~JobQueue()
{
    using func_t = void (*)(JobQueue*);
    RelocFunc<func_t> func(Addresses::JobQueue_dtor);

    func(this);
}

RED4EXT_INLINE void RED4ext::JobQueue::Wait(JobHandle& aJob)
{
    unk10.Join(aJob);
}

RED4EXT_INLINE [[nodiscard]] RED4ext::JobHandle RED4ext::JobQueue::Capture()
{
    using func_t = JobHandle* (*)(JobQueue*, JobHandle*);
    RelocFunc<func_t> func(Addresses::JobQueue_Capture);

    JobHandle handle{};
    func(this, &handle);

    return std::move(handle);
}

RED4EXT_INLINE void RED4ext::JobQueue::DispatchJob(const JobInstance& aJob)
{
    using func_t = void (*)(const JobInstance&, JobHandle&, JobHandle&);
    RelocFunc<func_t> func(Addresses::JobInternals_DispatchJob);

    func(aJob, unk10, unk18);
}

RED4EXT_INLINE void RED4ext::JobQueue::SyncWait()
{
    using func_t = void (*)(JobQueue*);
    RelocFunc<func_t> func(Addresses::JobQueue_SyncWait);

    func(this);
}
