#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_VectorJoin : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorJoin";
    static constexpr const char* ALIAS = NAME;

    anim::VectorLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorJoin, 0x88);
} // namespace anim
} // namespace RED4ext
