#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MetaQuest.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetMetaQuestProgress_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetMetaQuestProgress_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::MetaQuest metaQuestId; // 38
    uint32_t percent; // 3C
    LocalizationString text; // 40
};
RED4EXT_ASSERT_SIZE(SetMetaQuestProgress_NodeType, 0x68);
} // namespace quest
using questSetMetaQuestProgress_NodeType = quest::SetMetaQuestProgress_NodeType;
} // namespace RED4ext

// clang-format on
