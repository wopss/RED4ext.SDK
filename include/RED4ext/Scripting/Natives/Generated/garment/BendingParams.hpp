#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace garment
{
struct BendingParams
{
    static constexpr const char* NAME = "garmentBendingParams";
    static constexpr const char* ALIAS = NAME;

    float bendPowerOffsetInCM; // 00
};
RED4EXT_ASSERT_SIZE(BendingParams, 0x4);
} // namespace garment
using garmentBendingParams = garment::BendingParams;
} // namespace RED4ext

// clang-format on
