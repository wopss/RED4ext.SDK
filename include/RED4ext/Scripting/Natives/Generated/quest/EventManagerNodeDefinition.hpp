#pragma once

// clang-format off

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

namespace quest
{
struct EventManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questEventManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 48
    CString managerName; // 80
    CName PSClassName; // A0
    CName componentName; // A8
    Handle<IScriptable> event; // B0
    bool isUiEvent; // C0
    bool isObjectPlayer; // C1
    uint8_t unkC2[0xC8 - 0xC2]; // C2
};
RED4EXT_ASSERT_SIZE(EventManagerNodeDefinition, 0xC8);
} // namespace quest
using questEventManagerNodeDefinition = quest::EventManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
