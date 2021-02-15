#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/MetaQuest.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
