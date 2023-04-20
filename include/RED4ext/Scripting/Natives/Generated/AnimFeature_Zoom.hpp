#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_Zoom : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_Zoom";
    static constexpr const char* ALIAS = NAME;

    float finalZoomLevel; // 40
    float weaponZoomLevel; // 44
    float weaponAimFOV; // 48
    float worldFOV; // 4C
    int32_t zoomLevelNum; // 50
    float noWeaponAimInTime; // 54
    float noWeaponAimOutTime; // 58
    bool shouldUseWeaponZoomStats; // 5C
    bool focusModeActive; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(AnimFeature_Zoom, 0x60);
} // namespace RED4ext

// clang-format on
