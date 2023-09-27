#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LevelUpData.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowLevelUpNotification_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowLevelUpNotification_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::LevelUpData levelUpData; // 38
};
RED4EXT_ASSERT_SIZE(ShowLevelUpNotification_NodeType, 0x50);
} // namespace quest
using questShowLevelUpNotification_NodeType = quest::ShowLevelUpNotification_NodeType;
} // namespace RED4ext

// clang-format on
