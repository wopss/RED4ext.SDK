#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorCoordinateType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_CoordinateFromVector : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CoordinateFromVector";
    static constexpr const char* ALIAS = NAME;

    anim::VectorCoordinateType vectorCoodrinateType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    anim::VectorLink input; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_CoordinateFromVector, 0x70);
} // namespace anim
using animAnimNode_CoordinateFromVector = anim::AnimNode_CoordinateFromVector;
} // namespace RED4ext

// clang-format on
