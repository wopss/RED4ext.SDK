#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace gen
{
struct LevelRandomizerEntry
{
    static constexpr const char* NAME = "genLevelRandomizerEntry";
    static constexpr const char* ALIAS = NAME;

    CString id; // 00
    CName templateName; // 20
    NodeRef spawnPos; // 28
    float probability; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(LevelRandomizerEntry, 0x38);
} // namespace gen
using genLevelRandomizerEntry = gen::LevelRandomizerEntry;
} // namespace RED4ext

// clang-format on
