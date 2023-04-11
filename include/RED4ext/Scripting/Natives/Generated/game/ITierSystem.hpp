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
struct ITierSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameITierSystem";
    static constexpr const char* ALIAS = "ITierSystem";

};
RED4EXT_ASSERT_SIZE(ITierSystem, 0x48);
} // namespace game
using gameITierSystem = game::ITierSystem;
using ITierSystem = game::ITierSystem;
} // namespace RED4ext

// clang-format on
