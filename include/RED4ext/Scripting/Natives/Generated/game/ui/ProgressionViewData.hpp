#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationViewData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ProgressionViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiProgressionViewData";
    static constexpr const char* ALIAS = "ProgressionViewData";

    int32_t expValue; // 90
    float expProgress; // 94
    int32_t delta; // 98
    int32_t currentLevel; // 9C
    CName notificationColorTheme; // A0
    bool canBeMerged; // A8
    bool isLevelMaxed; // A9
    uint8_t unkAA[0xAC - 0xAA]; // AA
    game::data::ProficiencyType type; // AC
};
RED4EXT_ASSERT_SIZE(ProgressionViewData, 0xB0);
} // namespace game::ui
using gameuiProgressionViewData = game::ui::ProgressionViewData;
using ProgressionViewData = game::ui::ProgressionViewData;
} // namespace RED4ext

// clang-format on
