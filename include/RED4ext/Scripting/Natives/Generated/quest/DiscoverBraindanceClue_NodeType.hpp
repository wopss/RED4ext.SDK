#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct DiscoverBraindanceClue_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questDiscoverBraindanceClue_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName clueName; // 38
};
RED4EXT_ASSERT_SIZE(DiscoverBraindanceClue_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
