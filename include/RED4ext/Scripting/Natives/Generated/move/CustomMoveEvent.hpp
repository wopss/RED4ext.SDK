#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace move
{
struct CustomMoveEvent : game::ActionEvent
{
    static constexpr const char* NAME = "moveCustomMoveEvent";
    static constexpr const char* ALIAS = "CustomMoveEvent";

    int32_t test; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CustomMoveEvent, 0x70);
} // namespace move
using moveCustomMoveEvent = move::CustomMoveEvent;
using CustomMoveEvent = move::CustomMoveEvent;
} // namespace RED4ext

// clang-format on
