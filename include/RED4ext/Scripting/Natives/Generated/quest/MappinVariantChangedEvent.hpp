#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct JournalEntry; }

namespace quest
{
struct MappinVariantChangedEvent : red::Event
{
    static constexpr const char* NAME = "questMappinVariantChangedEvent";
    static constexpr const char* ALIAS = "MappinVariantChangedEvent";

    WeakHandle<game::JournalEntry> entry; // 40
    game::data::MappinPhase phase; // 50
    game::data::MappinVariant variant; // 54
};
RED4EXT_ASSERT_SIZE(MappinVariantChangedEvent, 0x58);
} // namespace quest
using questMappinVariantChangedEvent = quest::MappinVariantChangedEvent;
using MappinVariantChangedEvent = quest::MappinVariantChangedEvent;
} // namespace RED4ext

// clang-format on
