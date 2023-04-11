#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IActivityCardsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ActivityCardsSystem : game::IActivityCardsSystem
{
    static constexpr const char* NAME = "gameActivityCardsSystem";
    static constexpr const char* ALIAS = "ActivityCardsSystem";

};
RED4EXT_ASSERT_SIZE(ActivityCardsSystem, 0x48);
} // namespace game
using gameActivityCardsSystem = game::ActivityCardsSystem;
using ActivityCardsSystem = game::ActivityCardsSystem;
} // namespace RED4ext

// clang-format on
