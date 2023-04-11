#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ExitType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IONodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct OutputNodeDefinition : quest::IONodeDefinition
{
    static constexpr const char* NAME = "questOutputNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::ExitType type; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(OutputNodeDefinition, 0x58);
} // namespace quest
using questOutputNodeDefinition = quest::OutputNodeDefinition;
} // namespace RED4ext

// clang-format on
