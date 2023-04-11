#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct SignalPriorityDefinition : ISerializable
{
    static constexpr const char* NAME = "gameSignalPriorityDefinition";
    static constexpr const char* ALIAS = NAME;

    uint16_t defaultPriority; // 30
    uint8_t unk32[0x38 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(SignalPriorityDefinition, 0x38);
} // namespace game
using gameSignalPriorityDefinition = game::SignalPriorityDefinition;
} // namespace RED4ext

// clang-format on
