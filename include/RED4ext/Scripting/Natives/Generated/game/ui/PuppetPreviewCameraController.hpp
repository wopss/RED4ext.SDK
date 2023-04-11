#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewCameraSetup.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreviewCameraController
{
    static constexpr const char* NAME = "gameuiPuppetPreviewCameraController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::PuppetPreviewCameraSetup> cameraSetup; // 00
    uint32_t activeSetup; // 10
    uint8_t unk14[0x30 - 0x14]; // 14
    float transitionDelay; // 30
    uint8_t unk34[0x70 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(PuppetPreviewCameraController, 0x70);
} // namespace game::ui
using gameuiPuppetPreviewCameraController = game::ui::PuppetPreviewCameraController;
} // namespace RED4ext

// clang-format on
