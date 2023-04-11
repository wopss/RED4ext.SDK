#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectTriggerPositioningType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectTriggerRotationType.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectTriggerEffectDesc : ISerializable
{
    static constexpr const char* NAME = "gameEffectTriggerEffectDesc";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 30
    game::EffectTriggerPositioningType positionType; // 38
    game::EffectTriggerRotationType rotationType; // 3C
    Vector3 offset; // 40
    uint32_t playFromHour; // 4C
    uint32_t playTillHour; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(EffectTriggerEffectDesc, 0x58);
} // namespace game
using gameEffectTriggerEffectDesc = game::EffectTriggerEffectDesc;
} // namespace RED4ext

// clang-format on
