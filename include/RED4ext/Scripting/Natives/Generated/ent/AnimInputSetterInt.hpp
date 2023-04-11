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
struct AnimInputSetterInt : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterInt";
    static constexpr const char* ALIAS = "AnimInputSetterInt";

    int32_t value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimInputSetterInt, 0x50);
} // namespace ent
using entAnimInputSetterInt = ent::AnimInputSetterInt;
using AnimInputSetterInt = ent::AnimInputSetterInt;
} // namespace RED4ext

// clang-format on
