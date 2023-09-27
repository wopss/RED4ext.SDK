#pragma once

// clang-format off

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

namespace ent
{
struct SpawnEffectEvent : red::Event
{
    static constexpr const char* NAME = "entSpawnEffectEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t e3hackDeferCount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<world::EffectBlackboard> blackboard; // 48
    uint8_t unk58[0x68 - 0x58]; // 58
    CName effectName; // 68
    CRUID idForRandomizedEffect; // 70
    CName effectInstanceName; // 78
    bool persistOnDetach; // 80
    bool breakAllLoops; // 81
    bool breakAllOnDestroy; // 82
    uint8_t unk83[0x98 - 0x83]; // 83
};
RED4EXT_ASSERT_SIZE(SpawnEffectEvent, 0x98);
} // namespace ent
using entSpawnEffectEvent = ent::SpawnEffectEvent;
} // namespace RED4ext

// clang-format on
