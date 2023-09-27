#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { struct JournalEntry; }

namespace game
{
struct JournalContainerEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalContainerEntry";
    static constexpr const char* ALIAS = "JournalContainerEntry";

    uint8_t unk70[0x78 - 0x70]; // 70
    DynArray<Handle<game::JournalEntry>> entries; // 78
};
RED4EXT_ASSERT_SIZE(JournalContainerEntry, 0x88);
} // namespace game
using gameJournalContainerEntry = game::JournalContainerEntry;
using JournalContainerEntry = game::JournalContainerEntry;
} // namespace RED4ext

// clang-format on
