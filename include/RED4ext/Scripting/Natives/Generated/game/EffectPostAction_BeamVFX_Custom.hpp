#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction_BeamVFX.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectPostAction_BeamVFX_Custom : game::EffectPostAction_BeamVFX
{
    static constexpr const char* NAME = "gameEffectPostAction_BeamVFX_Custom";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
    RaRef<world::Effect> effect; // 58
    bool attached; // 60
    bool breakLoopOnDetach; // 61
    bool invert; // 62
    uint8_t unk63[0x64 - 0x63]; // 63
    float maxRange; // 64
    float maxRangeTPP; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    CName effectTag; // 70
};
RED4EXT_ASSERT_SIZE(EffectPostAction_BeamVFX_Custom, 0x78);
} // namespace game
using gameEffectPostAction_BeamVFX_Custom = game::EffectPostAction_BeamVFX_Custom;
} // namespace RED4ext

// clang-format on
