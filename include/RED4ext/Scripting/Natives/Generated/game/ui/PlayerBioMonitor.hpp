#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PlayerBioMonitor
{
    static constexpr const char* NAME = "gameuiPlayerBioMonitor";
    static constexpr const char* ALIAS = "PlayerBioMonitor";

    int32_t currentHealth; // 00
    int32_t maximumHealth; // 04
    int32_t currentCyberwarePct; // 08
    int32_t currentArmor; // 0C
    int32_t maximumArmor; // 10
};
RED4EXT_ASSERT_SIZE(PlayerBioMonitor, 0x14);
} // namespace game::ui
using gameuiPlayerBioMonitor = game::ui::PlayerBioMonitor;
using PlayerBioMonitor = game::ui::PlayerBioMonitor;
} // namespace RED4ext

// clang-format on
