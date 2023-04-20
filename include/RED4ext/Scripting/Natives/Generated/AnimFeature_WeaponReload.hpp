#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_WeaponReload : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_WeaponReload";
    static constexpr const char* ALIAS = NAME;

    bool emptyReload; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    int32_t amountToReload; // 44
    bool continueLoop; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float loopDuration; // 4C
    float emptyDuration; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_WeaponReload, 0x58);
} // namespace RED4ext

// clang-format on
