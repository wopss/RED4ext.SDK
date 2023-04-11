#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVisionModeNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleVisionMode_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questToggleVisionMode_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    bool enable; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(ToggleVisionMode_NodeType, 0x70);
} // namespace quest
using questToggleVisionMode_NodeType = quest::ToggleVisionMode_NodeType;
} // namespace RED4ext

// clang-format on
