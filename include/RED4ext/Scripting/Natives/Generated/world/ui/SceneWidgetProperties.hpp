#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world::ui
{
struct SceneWidgetProperties
{
    static constexpr const char* NAME = "worlduiSceneWidgetProperties";
    static constexpr const char* ALIAS = NAME;

    Vector3 faceVector; // 00
    Vector2 projectionPlaneSize; // 0C
    float maxInteractionDistance; // 14
    bool overrideMaxInteractionDistance; // 18
    uint8_t unk19[0x1C - 0x19]; // 19
    ERenderingPlane renderingPlane; // 1C
    bool useCustomFaceVector; // 20
    bool isInteractable; // 21
    bool isInteractableFromBehind; // 22
    bool isAlwaysVisible; // 23
};
RED4EXT_ASSERT_SIZE(SceneWidgetProperties, 0x24);
} // namespace world::ui
using worlduiSceneWidgetProperties = world::ui::SceneWidgetProperties;
} // namespace RED4ext

// clang-format on
