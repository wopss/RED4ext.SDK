#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CustomQuestNotificationData.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowCustomQuestNotification_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowCustomQuestNotification_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::CustomQuestNotificationData customQuestNotificationData; // 38
};
RED4EXT_ASSERT_SIZE(ShowCustomQuestNotification_NodeType, 0xA0);
} // namespace quest
using questShowCustomQuestNotification_NodeType = quest::ShowCustomQuestNotification_NodeType;
} // namespace RED4ext

// clang-format on
