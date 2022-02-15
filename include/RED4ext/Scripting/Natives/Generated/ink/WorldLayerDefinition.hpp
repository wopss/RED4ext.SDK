#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { 
struct WorldLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkWorldLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector3 faceVector; // 38
    Vector2 projectionPlaneSize; // 44
    ERenderingPlane renderingPlane; // 4C
    float maxInteractionDistance; // 50
    bool useCustomFaceVector; // 54
    uint8_t unk55[0x56 - 0x55]; // 55
    bool isInteractableFromBehind; // 56
    bool isAlwaysVisible; // 57
};
RED4EXT_ASSERT_SIZE(WorldLayerDefinition, 0x58);
} // namespace ink
} // namespace RED4ext
