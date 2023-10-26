#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_DampVector : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_DampVector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 defaultIncreaseSpeed; // 50
    Vector4 defaultDecreaseSpeed; // 60
    bool startFromDefaultValue; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
    Vector4 defaultInitialValue; // 80
    anim::VectorLink inputNode; // 90
    anim::VectorLink increaseSpeedNode; // B0
    anim::VectorLink decreaseSpeedNode; // D0
    uint8_t unkF0[0x100 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(AnimNode_DampVector, 0x100);
} // namespace anim
using animAnimNode_DampVector = anim::AnimNode_DampVector;
} // namespace RED4ext

// clang-format on
