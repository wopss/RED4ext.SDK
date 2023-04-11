#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct GenderMask
{
    static constexpr const char* NAME = "scnGenderMask";
    static constexpr const char* ALIAS = NAME;

    uint8_t mask; // 00
};
RED4EXT_ASSERT_SIZE(GenderMask, 0x1);
} // namespace scn
using scnGenderMask = scn::GenderMask;
} // namespace RED4ext

// clang-format on
