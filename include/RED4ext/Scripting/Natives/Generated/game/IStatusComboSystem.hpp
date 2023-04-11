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
struct IStatusComboSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStatusComboSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IStatusComboSystem, 0x48);
} // namespace game
using gameIStatusComboSystem = game::IStatusComboSystem;
} // namespace RED4ext

// clang-format on
