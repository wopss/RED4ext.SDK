#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewCameraController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkPuppetPreviewGameController";

    uint8_t unk118[0x128 - 0x118]; // 118
    game::ui::PuppetPreviewCameraController cameraController; // 128
    uint8_t unk198[0x1B8 - 0x198]; // 198
};
RED4EXT_ASSERT_SIZE(PuppetPreviewGameController, 0x1B8);
} // namespace game::ui
using gameuiPuppetPreviewGameController = game::ui::PuppetPreviewGameController;
using inkPuppetPreviewGameController = game::ui::PuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
