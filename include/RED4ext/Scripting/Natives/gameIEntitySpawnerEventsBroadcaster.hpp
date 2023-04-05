#pragma once

#include <RED4ext/Callback.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntitySpawnerEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
struct EntityStub;

namespace game
{
using EntitySpawnerCallback = Callback<void (*)(EntitySpawnerEventType, EntityID, EntityID, EntityStub*), 32>;

struct IEntitySpawnerEventsBroadcaster : IGameSystem
{
    static constexpr const char* NAME = "gameIEntitySpawnerEventsBroadcaster";
    static constexpr const char* ALIAS = "IEntitySpawnerEventsBroadcaster";

    virtual uint32_t RegisterListener(EntitySpawnerCallback&& aCallback, const char* a2) = 0; // 1A8
    virtual uint64_t UnregisterListener(uint32_t aListenerID) = 0;                            // 1B0
    virtual void sub_1B8() = 0;                                                               // 1B8
    virtual void sub_1C0() = 0;                                                               // 1C0
    virtual void sub_1C8() = 0;                                                               // 1C8
};
RED4EXT_ASSERT_SIZE(IEntitySpawnerEventsBroadcaster, 0x48);
} // namespace game
} // namespace RED4ext
