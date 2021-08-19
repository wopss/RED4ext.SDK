#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
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
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(CallContact_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
