#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IntLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_IntToFloatConverter : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_IntToFloatConverter";
    static constexpr const char* ALIAS = NAME;

    anim::IntLink inputNode; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_IntToFloatConverter, 0x68);
} // namespace anim
using animAnimNode_IntToFloatConverter = anim::AnimNode_IntToFloatConverter;
} // namespace RED4ext

// clang-format on
