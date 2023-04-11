#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct OpenBriefing_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questOpenBriefing_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> briefingPath; // 38
};
RED4EXT_ASSERT_SIZE(OpenBriefing_NodeType, 0x48);
} // namespace quest
using questOpenBriefing_NodeType = quest::OpenBriefing_NodeType;
} // namespace RED4ext

// clang-format on
