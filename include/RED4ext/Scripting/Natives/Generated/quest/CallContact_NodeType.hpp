#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallVisuals.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct CallContact_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questCallContact_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> caller; // 38
    Handle<game::JournalPath> addressee; // 48
    quest::PhoneCallPhase phase; // 58
    quest::PhoneCallMode mode; // 5C
    NodeRef prefabNodeRef; // 60
    bool applyPhoneRestriction; // 68
    bool isRejectable; // 69
    bool showAvatar; // 6A
    uint8_t unk6B[0x6C - 0x6B]; // 6B
    quest::PhoneCallVisuals visuals; // 6C
};
RED4EXT_ASSERT_SIZE(CallContact_NodeType, 0x70);
} // namespace quest
using questCallContact_NodeType = quest::CallContact_NodeType;
} // namespace RED4ext

// clang-format on
