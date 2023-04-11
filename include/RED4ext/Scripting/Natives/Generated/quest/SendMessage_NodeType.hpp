#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct SendMessage_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSendMessage_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> msg; // 38
    bool sendNotification; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(SendMessage_NodeType, 0x50);
} // namespace quest
using questSendMessage_NodeType = quest::SendMessage_NodeType;
} // namespace RED4ext

// clang-format on
