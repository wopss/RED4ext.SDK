#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BaseObjectNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct PopulactionControllerNodeDefinition : quest::BaseObjectNodeDefinition
{
    static constexpr const char* NAME = "questPopulactionControllerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(PopulactionControllerNodeDefinition, 0x58);
} // namespace quest
using questPopulactionControllerNodeDefinition = quest::PopulactionControllerNodeDefinition;
} // namespace RED4ext

// clang-format on
