#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectPostAction_Beam_RicochetPreviewPreviewEffect
{
    static constexpr const char* NAME = "gameEffectPostAction_Beam_RicochetPreviewPreviewEffect";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 00
    RaRef<world::Effect> effectSnap; // 08
    CName effectTag; // 10
    CName effectSnapTag; // 18
    float forwardOffset; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(EffectPostAction_Beam_RicochetPreviewPreviewEffect, 0x28);
} // namespace game
using gameEffectPostAction_Beam_RicochetPreviewPreviewEffect = game::EffectPostAction_Beam_RicochetPreviewPreviewEffect;
} // namespace RED4ext

// clang-format on
