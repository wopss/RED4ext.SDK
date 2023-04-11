#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct ICoverSelectionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIICoverSelectionSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICoverSelectionSystem, 0x48);
} // namespace AI
using AIICoverSelectionSystem = AI::ICoverSelectionSystem;
} // namespace RED4ext

// clang-format on
