#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimTrackParameter
{
    static constexpr const char* NAME = "entAnimTrackParameter";
    static constexpr const char* ALIAS = NAME;

    CName animTrackName; // 00
    CName parameterName; // 08
    float defaultValue; // 10
    uint8_t unk14[0x30 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(AnimTrackParameter, 0x30);
} // namespace ent
using entAnimTrackParameter = ent::AnimTrackParameter;
} // namespace RED4ext

// clang-format on
