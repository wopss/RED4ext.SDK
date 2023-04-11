#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace cp
{
struct AnimFeature_Stairs : anim::AnimFeature
{
    static constexpr const char* NAME = "cpAnimFeature_Stairs";
    static constexpr const char* ALIAS = NAME;

    bool onOff; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimFeature_Stairs, 0x48);
} // namespace cp
using cpAnimFeature_Stairs = cp::AnimFeature_Stairs;
} // namespace RED4ext

// clang-format on
