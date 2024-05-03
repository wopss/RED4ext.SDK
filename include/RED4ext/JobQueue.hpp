#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Function.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Memory/Utils.hpp>

namespace RED4ext
{
namespace JobInternals
{
void SetLocalThreadParam(uint8_t aParam);
} // namespace JobInternals

/**
 * @brief Represents a class of jobs. In other words, for each T in Dispatch<T>(T aJob)
 * there is one instance of the family. The actual purpose is unknown.
 */
struct JobFamily
{
    explicit JobFamily(const char* aName = "") noexcept;

    const char* name;  // 00
    const char* unk08; // 08
    const char* unk10; // 10
    uint32_t unk18;    // 18
    uint32_t unk1C;    // 1C
    uint32_t unk20;    // 20
    uint32_t unk24;    // 24
    uint32_t hash;     // 28
    uint32_t unk2C;    // 2C
    uint32_t unk30;    // 30
    uint32_t unk34;    // 34
    uint16_t unk38;    // 38
    uint32_t unk3C;    // 3C
};
RED4EXT_ASSERT_SIZE(JobFamily, 0x40);
RED4EXT_ASSERT_OFFSET(JobFamily, name, 0x00);
RED4EXT_ASSERT_OFFSET(JobFamily, hash, 0x28);
RED4EXT_ASSERT_OFFSET(JobFamily, unk3C, 0x3C);

struct JobParamSet
{
    JobParamSet() noexcept;
    JobParamSet(const JobParamSet&) = default;
    JobParamSet(JobParamSet&&) = default;
    JobParamSet& operator=(const JobParamSet&) = default;
    JobParamSet& operator=(JobParamSet&&) = default;

    uint8_t unk00; // 00
    uint8_t unk01; // 01
    uint8_t unk02; // 02
};
RED4EXT_ASSERT_SIZE(JobParamSet, 0x3);

struct JobInternalHandle
{
    uint64_t unk00;          // 00
    uint64_t unk08;          // 08
    uint64_t unk10;          // 10
    volatile uint32_t unk18; // 18
    volatile uint32_t unk1C; // 1C
    uint8_t unk20;           // 20
    JobParamSet params;      // 21
};
RED4EXT_ASSERT_SIZE(JobInternalHandle, 0x28);
RED4EXT_ASSERT_OFFSET(JobInternalHandle, unk1C, 0x1C);

/**
 * @brief A handle associated with a job queue or job group.
 * It's used to track job completion and sync job execution.
 */
class JobHandle
{
public:
    JobHandle(uintptr_t aUnk = 0);
    JobHandle(const JobHandle&);
    JobHandle(JobHandle&&) noexcept;
    JobHandle& operator=(const JobHandle&);
    JobHandle& operator=(JobHandle&&) noexcept;
    ~JobHandle();

    /**
     * @brief Joins another job handle to this one.
     * The joint handle represents the completion of all joined handles.
     *
     * @param aOther The job handle to join.
     */
    void Join(const JobHandle& aOther);

    JobInternalHandle* internal; // 00

private:
    void AcquireInternalHandle(uintptr_t aUnk);
    void CopyInternalHandle(const JobHandle& aOther);
    void MoveInternalHandle(JobHandle& aOther);
    void ReleaseInternalHandle();
};
RED4EXT_ASSERT_SIZE(JobHandle, 0x8);

/**
 * @brief A group that joins several job queues together.
 * A group is considered completed when all queues in the group have completed.
 * Job queues from the same group are executed simultaneously.
 * To be added to a group, the job queue must be constructed using a group instance,
 * which can be obtained as a first argument to the currently executing job function.
 */
struct JobGroup
{
    JobGroup() = delete;
    JobGroup(const JobGroup&) = delete;
    JobGroup(JobGroup&&) = delete;
    JobGroup& operator=(const JobGroup&) = delete;
    JobGroup& operator=(JobGroup&&) = delete;

    uint64_t unk00;     // 00
    uint64_t unk08;     // 08
    uint64_t unk10;     // 10
    uint64_t unk18;     // 18
    uint64_t unk20;     // 20
    uint64_t unk28;     // 28
    JobParamSet params; // 30
};
RED4EXT_ASSERT_SIZE(JobGroup, 0x38);
RED4EXT_ASSERT_OFFSET(JobGroup, params, 0x30);

/**
 * @brief A payload for the job dispatcher.
 * Contains job data and a handler function to execute.
 */
struct JobInstance
{
    template<typename T>
    using TargetPtr = T*;

    template<typename T>
    using HandleFunc = void (*)(TargetPtr<T> aTarget, const JobGroup& aGroup);

    JobInstance(HandleFunc<void> aHandler, TargetPtr<void> aTarget, JobFamily* aFamily) noexcept
        : handler(aHandler)
        , target(aTarget)
        , family(aFamily)
        , unk18(0)
    {
    }

    template<typename T>
    JobInstance(HandleFunc<T> aHandler, TargetPtr<T> aTarget, JobFamily* aFamily) noexcept
        : handler(reinterpret_cast<HandleFunc<void>>(aHandler))
        , target(reinterpret_cast<TargetPtr<void>>(aTarget))
        , family(aFamily)
        , unk18(0)
    {
    }

    HandleFunc<void> handler; // 00 - Called by job dispatcher to execute the job
    TargetPtr<void> target;   // 08 - Job data that is passed to the handler
    JobFamily* family;        // 10
    uint64_t unk18;           // 18
};
RED4EXT_ASSERT_SIZE(JobInstance, 0x20);
RED4EXT_ASSERT_OFFSET(JobInstance, handler, 0x00);
RED4EXT_ASSERT_OFFSET(JobInstance, target, 0x08);
RED4EXT_ASSERT_OFFSET(JobInstance, family, 0x10);

/**
 * @brief An implementation of closure based jobs.
 *
 * @tparam L The closure type.
 */
template<typename L>
requires Detail::IsClosure<L, void, const JobGroup&> || Detail::IsClosure<L, void>
struct JobClosure : JobInstance
{
    using AllocatorType = Memory::Jobs2DataAllocator;
    using ClosureType = L;
    using ClosurePtr = L*;

    JobClosure(ClosureType&& aClosure)
        : JobInstance(&HandleTarget, CreateTarget(std::move(aClosure)), &GetFamily())
    {
    }

    static ClosurePtr CreateTarget(ClosureType&& aClosure)
    {
        // In this case the target is the closure itself.
        // We move the closure to our storage to extend its lifetime until the job is executed.
        return Memory::New<AllocatorType, ClosureType>(std::move(aClosure));
    }

    static void HandleTarget(ClosurePtr aTarget, const JobGroup& aGroup)
    {
        JobInternals::SetLocalThreadParam(aGroup.params.unk02);

        if constexpr (Detail::IsClosure<ClosureType, void, const JobGroup&>)
        {
            (*aTarget)(aGroup);
        }
        else
        {
            (*aTarget)();
        }

        JobInternals::SetLocalThreadParam(255);
        Memory::Delete<AllocatorType>(aTarget);
    }

    inline static JobFamily& GetFamily()
    {
        static JobFamily s_family;
        return s_family;
    }
};

/**
 * @brief A queue used to dispatch new backgroud jobs.
 * Job processing starts as soon as possible. If the job dispatcher is free,
 * the job will be executed immediately after it's added to the queue.
 * All jobs in the same queue are executed sequentially in the order added.
 * A queue is considered completed when all jobs in the queue have completed.
 * Any number of queues can exist and execute at the same time.
 */
class JobQueue
{
public:
    /**
     * @brief Starts a new queue and adds it to an existing group.
     *
     * @param aGroup The group instane to add the queue to.
     */
    explicit JobQueue(const JobGroup& aGroup);

    /**
     * @brief Starts a new queue with a new group.
     *
     * @param aParams An unknown param that usually has a default value.
     * @param aUnk An unknown param that's usually null.
     */
    explicit JobQueue(JobParamSet aParams = {}, uintptr_t aUnk = 0);

    JobQueue(const JobQueue&) = delete;
    JobQueue(JobQueue&&) = delete;
    JobQueue& operator=(const JobQueue&) = delete;
    JobQueue& operator=(JobQueue&&) = delete;

    ~JobQueue();

    /**
     * @brief Adds a closure based job to the queue.
     *
     * @tparam L The closure type.
     * @param aClosure The closure instance.
     */
    template<typename L>
    requires Detail::IsClosure<L, void, JobGroup&> || Detail::IsClosure<L, void>
    void Dispatch(L&& aClosure)
    {
        DispatchJob(JobClosure(std::move(aClosure)));
        SyncWait();
    }

    /**
     * @brief Adds a waiting point to the queue.
     *
     * @param aJob The job to wait before continuing the queue.
     */
    void Wait(const JobHandle& aJob);

    /**
     * @brief Finalizes the queue and returns a job handle associated with this queue.
     * This should be the last action after which no jobs should be added to the queue.
     *
     * @return A job handle that can be passed to a Wait() call on another queue.
     */
    [[nodiscard]] JobHandle Capture();

    const char* unk00;  // 00
    uintptr_t unk08;    // 08
    JobHandle unk10;    // 10
    JobHandle unk18;    // 18
    uintptr_t unk20;    // 20
    JobParamSet params; // 28
    uint32_t unk2C;     // 2C
    bool captured;      // 30
    uint8_t unk31;      // 31

private:
    void DispatchJob(const JobInstance& aJob);
    void SyncWait();
};
RED4EXT_ASSERT_SIZE(JobQueue, 0x38);
RED4EXT_ASSERT_OFFSET(JobQueue, unk10, 0x10);
RED4EXT_ASSERT_OFFSET(JobQueue, unk18, 0x18);
RED4EXT_ASSERT_OFFSET(JobQueue, params, 0x28);
RED4EXT_ASSERT_OFFSET(JobQueue, unk2C, 0x2C);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/JobQueue-inl.hpp>
#endif
