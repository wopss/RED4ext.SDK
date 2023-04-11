#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>

namespace RED4ext
{
namespace game::ui
{
struct EntityPreviewCameraSettings
{
    static constexpr const char* NAME = "gameuiEntityPreviewCameraSettings";
    static constexpr const char* ALIAS = "inkEntityPreviewCameraSettings";

    bool autoEnable; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    ERenderingMode renderingMode; // 04
    float panSpeed; // 08
    EulerAngles rotationSpeed; // 0C
    EulerAngles rotationMin; // 18
    EulerAngles rotationMax; // 24
    EulerAngles rotationDefault; // 30
    float zoomSpeed; // 3C
    float zoomMin; // 40
    float zoomMax; // 44
    float zoomDefault; // 48
};
RED4EXT_ASSERT_SIZE(EntityPreviewCameraSettings, 0x4C);
} // namespace game::ui
using gameuiEntityPreviewCameraSettings = game::ui::EntityPreviewCameraSettings;
using inkEntityPreviewCameraSettings = game::ui::EntityPreviewCameraSettings;
} // namespace RED4ext

// clang-format on
