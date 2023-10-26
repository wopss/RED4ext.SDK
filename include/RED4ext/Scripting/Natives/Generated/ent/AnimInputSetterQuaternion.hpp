#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) AnimInputSetterQuaternion : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterQuaternion";
    static constexpr const char* ALIAS = "AnimInputSetterQuaternion";

    uint8_t unk48[0x50 - 0x48]; // 48
    Quaternion value; // 50
};
RED4EXT_ASSERT_SIZE(AnimInputSetterQuaternion, 0x60);
} // namespace ent
using entAnimInputSetterQuaternion = ent::AnimInputSetterQuaternion;
using AnimInputSetterQuaternion = ent::AnimInputSetterQuaternion;
} // namespace RED4ext

// clang-format on
