#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct AddCombatLogMessage_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questAddCombatLogMessage_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString message; // 38
    LocalizationString localizedMessage; // 58
};
RED4EXT_ASSERT_SIZE(AddCombatLogMessage_NodeType, 0x80);
} // namespace quest
} // namespace RED4ext
