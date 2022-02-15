#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_PhysicalRay.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectProvider_PhysicalRayFan : game::EffectObjectProvider_PhysicalRay
{
    static constexpr const char* NAME = "gameEffectObjectProvider_PhysicalRayFan";
    static constexpr const char* ALIAS = NAME;

    game::EffectInputParameter_Float inputMinRayAngleDiff; // F0
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_PhysicalRayFan, 0x108);
} // namespace game
} // namespace RED4ext
