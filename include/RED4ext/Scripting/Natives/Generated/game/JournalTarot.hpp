#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalTarot : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalTarot";
    static constexpr const char* ALIAS = "JournalTarot";

    int32_t index; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    LocalizationString name; // 78
    LocalizationString description; // A0
    CName imagePart; // C8
};
RED4EXT_ASSERT_SIZE(JournalTarot, 0xD0);
} // namespace game
using gameJournalTarot = game::JournalTarot;
using JournalTarot = game::JournalTarot;
} // namespace RED4ext

// clang-format on
