#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace ink { struct UserData; }

namespace quest { 
struct SwitchToScenario_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSwitchToScenario_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName startScenarioName; // 38
    CName endScenarioName; // 40
    Handle<ink::UserData> userData; // 48
    bool forceOpenDuringFadeout; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(SwitchToScenario_NodeType, 0x60);
} // namespace quest
} // namespace RED4ext
