#pragma once

#include <cstdint>

#include <RED4ext/Callback.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/JobQueue.hpp>

namespace RED4ext
{
struct IUpdatableSystem;

enum class UpdateTickGroup : uint8_t
{
    FrameBegin,
    Multiplayer_UpdateStateSnapshots,
    EntityUpdateState,
    PreBuckets,
    Buckets,
    PostBuckets,
    CameraUpdate,
    PlayerAimUpdate,
    PostPlayerAimUpdate,
    MappinsUpdate,
    BlackboardCallbacks_SecondPass,
    PreRenderUpdate,
    Multiplayer_CaptureStateSnapshots,
    Unknown,
};

enum class UpdateBucketEnum : uint8_t
{
    Vehicle = 0,
    Character = 1,
    AttachedObject = 2,
    BucketCount = 3,
};

enum class UpdateBucketMask : uint8_t
{
    Vehicle = 1 << static_cast<uint8_t>(UpdateBucketEnum::Vehicle),
    Character = 1 << static_cast<uint8_t>(UpdateBucketEnum::Character),
    AttachedObject = 1 << static_cast<uint8_t>(UpdateBucketEnum::AttachedObject),
    Everything = Vehicle | Character | AttachedObject,
};

enum class UpdateBucketStage : uint8_t
{
    Entities_PreTick,
    Entities_ServiceEvents,
    PrePhysicsTick,
    UpdateTransformPrePhysics,
    PhysicsFlushBufferedState,
    PhysicsExecuteAsyncQueries,
    PostPhysicsSyncResults,
    UpdateTransformPostPhysics,
    AnimationUpdate,
    PostPhysicsTick,
    Entities_PostTick,
    Entities_PostServiceEvents,
    Unknown,
};

struct FrameDetailedInfo
{
    float deltaTime;    // 00
    float timeDilation; // 04
    void* unk08;        // 08
    uint32_t unk10;     // 10
};
RED4EXT_ASSERT_SIZE(FrameDetailedInfo, 0x18);
RED4EXT_ASSERT_OFFSET(FrameDetailedInfo, timeDilation, 0x04);
RED4EXT_ASSERT_OFFSET(FrameDetailedInfo, unk10, 0x10);

struct FrameInfo
{
    float deltaTime;            // 00
    FrameDetailedInfo* details; // 08
    uint8_t unk10;              // 10
};
RED4EXT_ASSERT_SIZE(FrameInfo, 0x18);
RED4EXT_ASSERT_OFFSET(FrameDetailedInfo, deltaTime, 0x00);
RED4EXT_ASSERT_OFFSET(FrameDetailedInfo, unk10, 0x10);

using GroupUpdateCallback = Callback<void (*)(FrameInfo&, JobQueue&)>;
using BucketUpdateCallback = Callback<void (*)(UpdateBucketEnum, FrameInfo&, JobQueue&)>;

struct UpdateRegistrar
{
    void RegisterUpdate(UpdateTickGroup aGroup, IUpdatableSystem* aSystem, const char* aName,
                        GroupUpdateCallback&& aCallback);
    void RegisterUpdate(UpdateBucketMask aBuckets, UpdateBucketStage aStage, IUpdatableSystem* aSystem,
                        const char* aName, BucketUpdateCallback&& aCallback);
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/SystemUpdate-inl.hpp>
#endif
