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
struct SetFocusClueState_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questSetFocusClueState_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    int32_t clueId; // 68
    bool clueState; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(SetFocusClueState_NodeType, 0x70);
} // namespace quest
using questSetFocusClueState_NodeType = quest::SetFocusClueState_NodeType;
} // namespace RED4ext

// clang-format on
