#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SwitchNameplate_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSwitchNameplate_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 38
    bool isPlayer; // 70
    bool enable; // 71
    bool alternativeName; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
};
RED4EXT_ASSERT_SIZE(SwitchNameplate_NodeType, 0x78);
} // namespace quest
using questSwitchNameplate_NodeType = quest::SwitchNameplate_NodeType;
} // namespace RED4ext

// clang-format on
