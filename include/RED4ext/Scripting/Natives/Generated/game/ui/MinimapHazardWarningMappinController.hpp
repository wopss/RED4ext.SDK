#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) MinimapHazardWarningMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapHazardWarningMappinController";
    static constexpr const char* ALIAS = "MinimapHazardWarningMappinController";

    uint8_t unk228[0x240 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(MinimapHazardWarningMappinController, 0x240);
} // namespace game::ui
using gameuiMinimapHazardWarningMappinController = game::ui::MinimapHazardWarningMappinController;
using MinimapHazardWarningMappinController = game::ui::MinimapHazardWarningMappinController;
} // namespace RED4ext

// clang-format on
