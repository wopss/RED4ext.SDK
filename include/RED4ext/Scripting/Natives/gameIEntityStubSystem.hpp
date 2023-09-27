#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ComponentPS;
struct EntityStubComponentPS;
struct IPersistencySystem;
} // namespace game

enum class EntityStubType : uint8_t
{
    World,
    Character,
    Vehicle,
};

enum class EntityStubStatus : uint8_t
{
    Requested,
    Created,
    InvalidRecord,
    DuplicateEntityId,
    Cancelled,
};

struct EntityStub
{
    game::IPersistencySystem* persistencySystem;               // 00
    StaticArray<Handle<game::ComponentPS>, 2> componentStates; // 08
    Handle<game::EntityStubComponentPS> stubState;             // 30
    EntityID entityID;                                         // 40
    EntityStubType stubType;                                   // 48
};
RED4EXT_ASSERT_SIZE(EntityStub, 0x50);
RED4EXT_ASSERT_OFFSET(EntityStub, entityID, 0x40);

struct EntityStubToken
{
    using AllocatorType = Memory::GMPL_SpawnAllocator;

    EntityStub* ExtractStub()
    {
        auto extracted = stub;
        stub = nullptr;
        return extracted;
    }

    EntityStub* stub;        // 00
    EntityID entityID;       // 08
    EntityStubStatus status; // 10
};
RED4EXT_ASSERT_SIZE(EntityStubToken, 0x18);
RED4EXT_ASSERT_OFFSET(EntityStubToken, stub, 0x00);
RED4EXT_ASSERT_OFFSET(EntityStubToken, entityID, 0x08);

using EntityStubTokenPtr = SharedPtr<EntityStubToken>;
using EntityStubCallback = Callback<void (*)(EntityStubTokenPtr& aToken), 128>;

struct EntityStubCreateRequest
{
    EntityStubCreateRequest() = default;

    EntityStubCreateRequest(EntityID aEntityID, const WorldTransform& aTransform, TweakDBID aRecordID)
        : entityID(aEntityID)
        , unk08(nullptr)
        , transform(aTransform)
        , recordID(aRecordID)
    {
    }

    EntityStubCreateRequest(EntityID aEntityID, const Vector4& aPosition, const Quaternion& aOrientation,
                            TweakDBID aRecordID)
        : entityID(aEntityID)
        , unk08(nullptr)
        , transform()
        , recordID(aRecordID)
    {
        transform.Position.x.Bits = static_cast<int32_t>(aPosition.X * (2 << 16));
        transform.Position.y.Bits = static_cast<int32_t>(aPosition.Y * (2 << 16));
        transform.Position.z.Bits = static_cast<int32_t>(aPosition.Z * (2 << 16));
        transform.Orientation = aOrientation;
    }

    EntityID entityID;        // 00
    void* unk08;              // 08
    WorldTransform transform; // 10
    TweakDBID recordID;       // 30
};
RED4EXT_ASSERT_SIZE(EntityStubCreateRequest, 0x40);
RED4EXT_ASSERT_OFFSET(EntityStubCreateRequest, entityID, 0x00);
RED4EXT_ASSERT_OFFSET(EntityStubCreateRequest, transform, 0x10);
RED4EXT_ASSERT_OFFSET(EntityStubCreateRequest, recordID, 0x30);

struct EntityStubRestoreRequest
{
    EntityStubRestoreRequest() = default;

    EntityStubRestoreRequest(EntityID aEntityId, TweakDBID aRecordId)
        : entityID(aEntityId)
        , recordID(aRecordId)
    {
    }

    EntityID entityID;  // 00
    TweakDBID recordID; // 08
};
RED4EXT_ASSERT_SIZE(EntityStubRestoreRequest, 0x10);
RED4EXT_ASSERT_OFFSET(EntityStubRestoreRequest, entityID, 0x00);
RED4EXT_ASSERT_OFFSET(EntityStubRestoreRequest, recordID, 0x08);

namespace game
{
struct IEntityStubSystem : IGameSystem
{
    static constexpr const char* NAME = "gameIEntityStubSystem";
    static constexpr const char* ALIAS = NAME;

    virtual void* CreateStub(EntityStubTokenPtr& aToken, EntityStubCreateRequest& aRequest,
                             EntityStubCallback&& aCallback) = 0; // 1A8
    virtual void* RestoreStub(EntityStubTokenPtr& aToken, EntityStubRestoreRequest& aRequest,
                              EntityStubCallback&& aCallback) = 0; // 1B0
    virtual void CancelStub(EntityStubTokenPtr& aToken) = 0;       // 1B8
    virtual void* DeleteStub(EntityStub*& aStub) = 0;              // 1C0
    virtual EntityStub* FindStub(EntityID aEntityID) = 0;          // 1C8
    virtual void sub_1D0() = 0;                                    // 1D0
    virtual void sub_1D8() = 0;                                    // 1D8
    virtual void sub_1E0() = 0;                                    // 1E0
    virtual void sub_1E8() = 0;                                    // 1E8
    virtual void sub_1F0() = 0;                                    // 1F0
    virtual void sub_1F8() = 0;                                    // 1F8
    virtual void sub_200() = 0;                                    // 200
    virtual void sub_208() = 0;                                    // 208
    virtual void sub_210() = 0;                                    // 210
    virtual void sub_218() = 0;                                    // 218
};
RED4EXT_ASSERT_SIZE(IEntityStubSystem, 0x48);
} // namespace game
using IEntityStubSystem = game::IEntityStubSystem;
} // namespace RED4ext
