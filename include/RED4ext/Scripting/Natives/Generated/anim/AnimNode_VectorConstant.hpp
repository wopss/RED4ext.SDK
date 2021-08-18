#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_VectorConstant : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorConstant";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 value; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorConstant, 0x60);
} // namespace anim
} // namespace RED4ext
