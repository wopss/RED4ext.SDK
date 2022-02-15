#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapHazardWarningMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapHazardWarningMappinController";
    static constexpr const char* ALIAS = "MinimapHazardWarningMappinController";

    uint8_t unk220[0x230 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(MinimapHazardWarningMappinController, 0x230);
} // namespace game::ui
using MinimapHazardWarningMappinController = game::ui::MinimapHazardWarningMappinController;
} // namespace RED4ext
