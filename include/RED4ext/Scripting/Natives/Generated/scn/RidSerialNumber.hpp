#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RidSerialNumber
{
    static constexpr const char* NAME = "scnRidSerialNumber";
    static constexpr const char* ALIAS = NAME;

    uint32_t serialNumber; // 00
};
RED4EXT_ASSERT_SIZE(RidSerialNumber, 0x4);
} // namespace scn
using scnRidSerialNumber = scn::RidSerialNumber;
} // namespace RED4ext

// clang-format on
