#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GenderSelectionPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiGenderSelectionPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkGenderSelectionPuppetPreviewGameController";

    uint8_t unk1B8[0x1C0 - 0x1B8]; // 1B8
};
RED4EXT_ASSERT_SIZE(GenderSelectionPuppetPreviewGameController, 0x1C0);
} // namespace game::ui
using gameuiGenderSelectionPuppetPreviewGameController = game::ui::GenderSelectionPuppetPreviewGameController;
using inkGenderSelectionPuppetPreviewGameController = game::ui::GenderSelectionPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
