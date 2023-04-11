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
struct IStatusEffectSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStatusEffectSystem";
    static constexpr const char* ALIAS = "IStatusEffectSystem";

};
RED4EXT_ASSERT_SIZE(IStatusEffectSystem, 0x48);
} // namespace game
using gameIStatusEffectSystem = game::IStatusEffectSystem;
using IStatusEffectSystem = game::IStatusEffectSystem;
} // namespace RED4ext

// clang-format on
