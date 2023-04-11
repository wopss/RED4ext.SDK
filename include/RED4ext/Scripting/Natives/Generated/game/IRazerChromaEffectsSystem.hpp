#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IRazerChromaEffectsSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIRazerChromaEffectsSystem";
    static constexpr const char* ALIAS = "IRazerChromaEffectsSystem";

};
RED4EXT_ASSERT_SIZE(IRazerChromaEffectsSystem, 0x48);
} // namespace game
using gameIRazerChromaEffectsSystem = game::IRazerChromaEffectsSystem;
using IRazerChromaEffectsSystem = game::IRazerChromaEffectsSystem;
} // namespace RED4ext

// clang-format on
