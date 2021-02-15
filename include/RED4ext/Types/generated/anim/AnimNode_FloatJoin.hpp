#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Types/generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FloatJoin : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatJoin";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatJoin, 0x88);
} // namespace anim
} // namespace RED4ext
