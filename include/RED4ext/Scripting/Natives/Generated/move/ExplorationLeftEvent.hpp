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
struct ExplorationLeftEvent : red::Event
{
    static constexpr const char* NAME = "moveExplorationLeftEvent";
    static constexpr const char* ALIAS = "ExplorationLeftEvent";

    move::ExplorationType type; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ExplorationLeftEvent, 0x48);
} // namespace move
using moveExplorationLeftEvent = move::ExplorationLeftEvent;
using ExplorationLeftEvent = move::ExplorationLeftEvent;
} // namespace RED4ext

// clang-format on
