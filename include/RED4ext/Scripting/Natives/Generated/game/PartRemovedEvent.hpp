#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct PartRemovedEvent : red::Event
{
    static constexpr const char* NAME = "gamePartRemovedEvent";
    static constexpr const char* ALIAS = "PartRemovedEvent";

    ItemID itemID; // 40
    ItemID removedPartID; // 50
};
RED4EXT_ASSERT_SIZE(PartRemovedEvent, 0x60);
} // namespace game
using gamePartRemovedEvent = game::PartRemovedEvent;
using PartRemovedEvent = game::PartRemovedEvent;
} // namespace RED4ext

// clang-format on
