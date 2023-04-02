#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>

namespace RED4ext
{
enum class EntityPersistenceStatus : uint64_t
{
    NotPersisted,
    CanBePersisted,
    Persisted,
};

namespace game
{
struct IPersistencySystem : IGameSystem
{
    static constexpr const char* NAME = "gameIPersistencySystem";
    static constexpr const char* ALIAS = "IGamePersistencySystem";

    virtual void* GetPersistentState(Handle<PersistentState>& aState, const PersistentID& aPersistentID,
                                     CClass* aPersistentStateType, bool aCreateState) = 0;      // 1A8
    virtual void sub_1B0() = 0;                                                                 // 1B0
    virtual void sub_1B8() = 0;                                                                 // 1B8
    virtual void sub_1C0() = 0;                                                                 // 1C0
    virtual void ResetPersistentState(const PersistentID& aPersistentID, bool aFireEvents) = 0; // 1C8
    virtual void sub_1D0() = 0;                                                                 // 1D0
    virtual void sub_1D8() = 0;                                                                 // 1D8
    virtual void RemoveDynamicEntityState(uint32_t aDynamicEntityID) = 0;                       // 1E0
    virtual EntityPersistenceStatus GetEntityStatus(EntityID aEntityID) = 0;                    // 1E8
    virtual void EnableDynamicEntityPersistence(uint32_t aDynamicEntityID) = 0;                 // 1F0
    virtual void DisableDynamicEntityPersistence(uint32_t aDynamicEntityID) = 0;                // 1F8
    virtual void sub_200() = 0;                                                                 // 200
    virtual void sub_208() = 0;                                                                 // 208
    virtual void sub_210() = 0;                                                                 // 210
    virtual void sub_218() = 0;                                                                 // 218
    virtual void sub_220() = 0;                                                                 // 220
    virtual void sub_228() = 0;                                                                 // 228
    virtual void sub_230() = 0;                                                                 // 230
    virtual void sub_238() = 0;                                                                 // 238
    virtual void sub_240() = 0;                                                                 // 240
};
RED4EXT_ASSERT_SIZE(IPersistencySystem, 0x48);
} // namespace game
using IPersistencySystem = game::IPersistencySystem;
} // namespace RED4ext
