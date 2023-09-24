#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct IgnoreHUDSafeZones : ink::UserData
{
    static constexpr const char* NAME = "inkIgnoreHUDSafeZones";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IgnoreHUDSafeZones, 0x58);
} // namespace ink
using inkIgnoreHUDSafeZones = ink::IgnoreHUDSafeZones;
} // namespace RED4ext

// clang-format on
