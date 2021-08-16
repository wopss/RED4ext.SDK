#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRetNodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct IJournal_NodeType : quest::IRetNodeType
{
    static constexpr const char* NAME = "questIJournal_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 30
};
RED4EXT_ASSERT_SIZE(IJournal_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
