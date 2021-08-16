#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace world { struct EffectBlackboard; }

namespace ent { 
struct SpawnEffectEvent : red::Event
{
    static constexpr const char* NAME = "entSpawnEffectEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t e3hackDeferCount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<world::EffectBlackboard> blackboard; // 48
    CName effectName; // 58
    CRUID idForRandomizedEffect; // 60
    CName effectInstanceName; // 68
    bool persistOnDetach; // 70
    bool breakAllLoops; // 71
    bool breakAllOnDestroy; // 72
    uint8_t unk73[0x88 - 0x73]; // 73
};
RED4EXT_ASSERT_SIZE(SpawnEffectEvent, 0x88);
} // namespace ent
} // namespace RED4ext
