#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimInputSetterBool : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterBool";
    static constexpr const char* ALIAS = "AnimInputSetterBool";

    bool value; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(AnimInputSetterBool, 0x50);
} // namespace ent
using entAnimInputSetterBool = ent::AnimInputSetterBool;
using AnimInputSetterBool = ent::AnimInputSetterBool;
} // namespace RED4ext

// clang-format on
