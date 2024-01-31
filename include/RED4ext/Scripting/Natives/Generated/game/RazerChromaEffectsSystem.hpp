#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IRazerChromaEffectsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct RazerChromaEffectsSystem : game::IRazerChromaEffectsSystem
{
    static constexpr const char* NAME = "gameRazerChromaEffectsSystem";
    static constexpr const char* ALIAS = "RazerChromaEffectsSystem";

    uint8_t unk48[0xC8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RazerChromaEffectsSystem, 0xC8);
} // namespace game
using gameRazerChromaEffectsSystem = game::RazerChromaEffectsSystem;
using RazerChromaEffectsSystem = game::RazerChromaEffectsSystem;
} // namespace RED4ext

// clang-format on
