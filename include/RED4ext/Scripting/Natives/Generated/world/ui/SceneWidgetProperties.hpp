#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world::ui { 
struct SceneWidgetProperties
{
    static constexpr const char* NAME = "worlduiSceneWidgetProperties";
    static constexpr const char* ALIAS = NAME;

    Vector3 faceVector; // 00
    Vector2 projectionPlaneSize; // 0C
    float maxInteractionDistance; // 14
    ERenderingPlane renderingPlane; // 18
    bool useCustomFaceVector; // 1C
    bool isInteractable; // 1D
    bool isInteractableFromBehind; // 1E
    bool isAlwaysVisible; // 1F
};
RED4EXT_ASSERT_SIZE(SceneWidgetProperties, 0x20);
} // namespace world::ui
} // namespace RED4ext
