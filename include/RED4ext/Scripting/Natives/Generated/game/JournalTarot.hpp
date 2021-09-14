#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalTarot : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalTarot";
    static constexpr const char* ALIAS = "JournalTarot";

    int32_t index; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    LocalizationString name; // 68
    LocalizationString description; // 90
    CName imagePart; // B8
};
RED4EXT_ASSERT_SIZE(JournalTarot, 0xC0);
} // namespace game
using JournalTarot = game::JournalTarot;
} // namespace RED4ext
