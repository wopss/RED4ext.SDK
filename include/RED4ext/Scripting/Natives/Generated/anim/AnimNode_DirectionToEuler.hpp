#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EDirectionToEuler.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_DirectionToEuler : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_DirectionToEuler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 initialForwardVector; // 50
    anim::VectorLink inputNode; // 60
    anim::EDirectionToEuler conversionType; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(AnimNode_DirectionToEuler, 0x90);
} // namespace anim
using animAnimNode_DirectionToEuler = anim::AnimNode_DirectionToEuler;
} // namespace RED4ext

// clang-format on
