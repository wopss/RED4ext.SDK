#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/ExplorationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace move
{
struct ExplorationEnteredEvent : red::Event
{
    static constexpr const char* NAME = "moveExplorationEnteredEvent";
    static constexpr const char* ALIAS = "ExplorationEnteredEvent";

    move::ExplorationType type; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ExplorationEnteredEvent, 0x48);
} // namespace move
using moveExplorationEnteredEvent = move::ExplorationEnteredEvent;
using ExplorationEnteredEvent = move::ExplorationEnteredEvent;
} // namespace RED4ext

// clang-format on
