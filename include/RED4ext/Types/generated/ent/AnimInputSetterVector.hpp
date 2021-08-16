#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace ent { 
struct AnimInputSetterVector : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterVector";
    static constexpr const char* ALIAS = "AnimInputSetterVector";

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 value; // 50
};
RED4EXT_ASSERT_SIZE(AnimInputSetterVector, 0x60);
} // namespace ent
using AnimInputSetterVector = ent::AnimInputSetterVector;
} // namespace RED4ext
