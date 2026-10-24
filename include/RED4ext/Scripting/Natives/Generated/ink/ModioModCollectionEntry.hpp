#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ModioModInfos.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ModioModState.hpp>

namespace RED4ext
{
namespace ink
{
struct ModioModCollectionEntry
{
    static constexpr const char* NAME = "inkModioModCollectionEntry";
    static constexpr const char* ALIAS = "ModioModCollectionEntry";

    int64_t modID; // 00
    ink::ModioModState modState; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    ink::ModioModInfos modInfo; // 10
    CString pathOnDisk; // 210
    uint64_t sizeOnDisk; // 230
};
RED4EXT_ASSERT_SIZE(ModioModCollectionEntry, 0x238);
} // namespace ink
using inkModioModCollectionEntry = ink::ModioModCollectionEntry;
using ModioModCollectionEntry = ink::ModioModCollectionEntry;
} // namespace RED4ext

// clang-format on
