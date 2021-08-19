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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk210[0x220 - 0x210]; // 210
};
RED4EXT_ASSERT_SIZE(MinimapHazardWarningMappinController, 0x220);
} // namespace game::ui
} // namespace RED4ext
