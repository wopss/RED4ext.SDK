#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IOnlineSystem.hpp>

namespace RED4ext
{
namespace game
{
struct GOGRewardsSystem : game::IOnlineSystem
{
    static constexpr const char* NAME = "gameGOGRewardsSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x150 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GOGRewardsSystem, 0x150);
} // namespace game
using gameGOGRewardsSystem = game::GOGRewardsSystem;
} // namespace RED4ext

// clang-format on
