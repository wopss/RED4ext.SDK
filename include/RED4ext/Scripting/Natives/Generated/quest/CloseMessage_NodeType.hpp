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
struct CloseMessage_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questCloseMessage_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> msg; // 38
};
RED4EXT_ASSERT_SIZE(CloseMessage_NodeType, 0x48);
} // namespace quest
using questCloseMessage_NodeType = quest::CloseMessage_NodeType;
} // namespace RED4ext

// clang-format on
