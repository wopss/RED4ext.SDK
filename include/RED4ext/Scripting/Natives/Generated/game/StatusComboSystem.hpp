#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusComboSystem.hpp>

namespace RED4ext
{
namespace game
{
struct StatusComboSystem : game::IStatusComboSystem
{
    static constexpr const char* NAME = "gameStatusComboSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StatusComboSystem, 0x48);
} // namespace game
using gameStatusComboSystem = game::StatusComboSystem;
} // namespace RED4ext

// clang-format on
