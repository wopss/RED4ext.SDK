#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Types/generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_QuaternionJoin : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionJoin";
    static constexpr const char* ALIAS = NAME;

    anim::QuaternionLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionJoin, 0x88);
} // namespace anim
} // namespace RED4ext
