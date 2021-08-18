#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
struct IScriptable;

namespace quest { 
struct EventManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questEventManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 48
    CString managerName; // 80
    CName PSClassName; // A0
    CName componentName; // A8
    Handle<IScriptable> event; // B0
    bool isObjectPlayer; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
};
RED4EXT_ASSERT_SIZE(EventManagerNodeDefinition, 0xC8);
} // namespace quest
} // namespace RED4ext
