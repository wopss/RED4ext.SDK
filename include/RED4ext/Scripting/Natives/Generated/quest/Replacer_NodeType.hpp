#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct Replacer_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questReplacer_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference objectRef; // 40
    CName audioOverrideAppearanceName; // 78
};
RED4EXT_ASSERT_SIZE(Replacer_NodeType, 0x80);
} // namespace quest
using questReplacer_NodeType = quest::Replacer_NodeType;
} // namespace RED4ext

// clang-format on
