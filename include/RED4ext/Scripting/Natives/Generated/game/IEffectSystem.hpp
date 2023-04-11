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
struct IEffectSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIEffectSystem";
    static constexpr const char* ALIAS = "IEffectSystem";

};
RED4EXT_ASSERT_SIZE(IEffectSystem, 0x48);
} // namespace game
using gameIEffectSystem = game::IEffectSystem;
using IEffectSystem = game::IEffectSystem;
} // namespace RED4ext

// clang-format on
