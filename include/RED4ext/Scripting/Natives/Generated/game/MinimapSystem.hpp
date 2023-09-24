#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMinimapSystem.hpp>

namespace RED4ext
{
namespace game
{
struct MinimapSystem : game::IMinimapSystem
{
    static constexpr const char* NAME = "gameMinimapSystem";
    static constexpr const char* ALIAS = "MinimapSystem";

    uint8_t unk48[0x2A8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MinimapSystem, 0x2A8);
} // namespace game
using gameMinimapSystem = game::MinimapSystem;
using MinimapSystem = game::MinimapSystem;
} // namespace RED4ext

// clang-format on
