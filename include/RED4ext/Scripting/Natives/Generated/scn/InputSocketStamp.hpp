#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct InputSocketStamp
{
    static constexpr const char* NAME = "scnInputSocketStamp";
    static constexpr const char* ALIAS = NAME;

    uint16_t name; // 00
    uint16_t ordinal; // 02
};
RED4EXT_ASSERT_SIZE(InputSocketStamp, 0x4);
} // namespace scn
using scnInputSocketStamp = scn::InputSocketStamp;
} // namespace RED4ext

// clang-format on
