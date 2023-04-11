#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn
{
struct SpawnSetParams
{
    static constexpr const char* NAME = "scnSpawnSetParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef reference; // 00
    CName entryName; // 08
    bool forceMaxVisibility; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(SpawnSetParams, 0x18);
} // namespace scn
using scnSpawnSetParams = scn::SpawnSetParams;
} // namespace RED4ext

// clang-format on
