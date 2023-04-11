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
struct AnimInputSetterFloat : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterFloat";
    static constexpr const char* ALIAS = "AnimInputSetterFloat";

    float value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimInputSetterFloat, 0x50);
} // namespace ent
using entAnimInputSetterFloat = ent::AnimInputSetterFloat;
using AnimInputSetterFloat = ent::AnimInputSetterFloat;
} // namespace RED4ext

// clang-format on
