#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreviewCameraSetup
{
    static constexpr const char* NAME = "gameuiPuppetPreviewCameraSetup";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    uint8_t unk08[0x14 - 0x8]; // 8
    float cameraZoom; // 14
    float interpolationTime; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(PuppetPreviewCameraSetup, 0x20);
} // namespace game::ui
using gameuiPuppetPreviewCameraSetup = game::ui::PuppetPreviewCameraSetup;
} // namespace RED4ext

// clang-format on
