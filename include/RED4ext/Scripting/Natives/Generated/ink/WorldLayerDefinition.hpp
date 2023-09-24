#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct WorldLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkWorldLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector3 faceVector; // 38
    Vector2 projectionPlaneSize; // 44
    ERenderingPlane renderingPlane; // 4C
    float maxInteractionDistance; // 50
    bool overrideMaxInteractionDistance; // 54
    bool useCustomFaceVector; // 55
    uint8_t unk56[0x57 - 0x56]; // 56
    bool isInteractableFromBehind; // 57
    bool isAlwaysVisible; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(WorldLayerDefinition, 0x60);
} // namespace ink
using inkWorldLayerDefinition = ink::WorldLayerDefinition;
} // namespace RED4ext

// clang-format on
