#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectTransformSequenceDictionaryEntry
{
    static constexpr const char* NAME = "gameSmartObjectTransformSequenceDictionaryEntry";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint16_t> sequence; // 00
    uint8_t id; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(SmartObjectTransformSequenceDictionaryEntry, 0x18);
} // namespace game
using gameSmartObjectTransformSequenceDictionaryEntry = game::SmartObjectTransformSequenceDictionaryEntry;
} // namespace RED4ext

// clang-format on
