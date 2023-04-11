#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/BoolLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BoolToFloatConverter : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_BoolToFloatConverter";
    static constexpr const char* ALIAS = NAME;

    anim::BoolLink inputNode; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_BoolToFloatConverter, 0x68);
} // namespace anim
using animAnimNode_BoolToFloatConverter = anim::AnimNode_BoolToFloatConverter;
} // namespace RED4ext

// clang-format on
