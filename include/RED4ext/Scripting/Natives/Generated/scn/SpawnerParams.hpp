#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn
{
struct SpawnerParams
{
    static constexpr const char* NAME = "scnSpawnerParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef reference; // 00
    bool forceMaxVisibility; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(SpawnerParams, 0x10);
} // namespace scn
using scnSpawnerParams = scn::SpawnerParams;
} // namespace RED4ext

// clang-format on
