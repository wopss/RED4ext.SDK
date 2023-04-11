#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct CustomQuestNotificationData
{
    static constexpr const char* NAME = "questCustomQuestNotificationData";
    static constexpr const char* ALIAS = "CustomQuestNotificationData";

    CString header; // 00
    CString desc; // 20
    CName icon; // 40
    CString fluffHeader; // 48
};
RED4EXT_ASSERT_SIZE(CustomQuestNotificationData, 0x68);
} // namespace quest
using questCustomQuestNotificationData = quest::CustomQuestNotificationData;
using CustomQuestNotificationData = quest::CustomQuestNotificationData;
} // namespace RED4ext

// clang-format on
