#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct RecordSelector : ISerializable
{
    static constexpr const char* NAME = "questRecordSelector";
    static constexpr const char* ALIAS = NAME;

    bool isCharacter; // 30
    bool isDevice; // 31
    bool isItem; // 32
    uint8_t unk33[0x34 - 0x33]; // 33
    TweakDBID characterRecordID; // 34
    TweakDBID deviceRecordID; // 3C
    TweakDBID itemRecordID; // 44
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(RecordSelector, 0x50);
} // namespace quest
using questRecordSelector = quest::RecordSelector;
} // namespace RED4ext

// clang-format on
