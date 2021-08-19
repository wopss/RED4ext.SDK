#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GenderSelectionPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiGenderSelectionPuppetPreviewGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1C0[0x1C8 - 0x1C0]; // 1C0
};
RED4EXT_ASSERT_SIZE(GenderSelectionPuppetPreviewGameController, 0x1C8);
} // namespace game::ui
} // namespace RED4ext
