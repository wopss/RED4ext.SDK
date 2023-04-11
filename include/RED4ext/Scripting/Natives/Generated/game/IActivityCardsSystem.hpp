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
struct IActivityCardsSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIActivityCardsSystem";
    static constexpr const char* ALIAS = "IActivityCardsSystem";

};
RED4EXT_ASSERT_SIZE(IActivityCardsSystem, 0x48);
} // namespace game
using gameIActivityCardsSystem = game::IActivityCardsSystem;
using IActivityCardsSystem = game::IActivityCardsSystem;
} // namespace RED4ext

// clang-format on
