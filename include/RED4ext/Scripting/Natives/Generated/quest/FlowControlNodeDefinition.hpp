#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct FlowControlNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questFlowControlNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool isOpen; // 48
    uint8_t unk49[0x4A - 0x49]; // 49
    uint16_t opensAt; // 4A
    uint16_t closesAt; // 4C
    uint8_t unk4E[0x50 - 0x4E]; // 4E
};
RED4EXT_ASSERT_SIZE(FlowControlNodeDefinition, 0x50);
} // namespace quest
using questFlowControlNodeDefinition = quest::FlowControlNodeDefinition;
} // namespace RED4ext

// clang-format on
