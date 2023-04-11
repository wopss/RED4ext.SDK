#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBaseResource.hpp>

namespace RED4ext
{
namespace game { struct JournalEntry; }

namespace game
{
struct JournalResource : game::JournalBaseResource
{
    static constexpr const char* NAME = "gameJournalResource";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalEntry> entry; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(JournalResource, 0x58);
} // namespace game
using gameJournalResource = game::JournalResource;
} // namespace RED4ext

// clang-format on
