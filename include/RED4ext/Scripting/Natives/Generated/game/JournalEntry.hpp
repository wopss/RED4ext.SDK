#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct JournalEntry : IScriptable
{
    static constexpr const char* NAME = "gameJournalEntry";
    static constexpr const char* ALIAS = "JournalEntry";

    CString id; // 40
};
RED4EXT_ASSERT_SIZE(JournalEntry, 0x60);
} // namespace game
using JournalEntry = game::JournalEntry;
} // namespace RED4ext
