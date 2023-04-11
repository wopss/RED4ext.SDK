#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidSerialNumber.hpp>

namespace RED4ext
{
namespace scn
{
struct RidTag
{
    static constexpr const char* NAME = "scnRidTag";
    static constexpr const char* ALIAS = NAME;

    CName signature; // 00
    scn::RidSerialNumber serialNumber; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(RidTag, 0x10);
} // namespace scn
using scnRidTag = scn::RidTag;
} // namespace RED4ext

// clang-format on
