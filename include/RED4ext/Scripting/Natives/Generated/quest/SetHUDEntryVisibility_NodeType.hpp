#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetHUDEntryVisibility_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetHUDEntryVisibility_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> hudEntryName; // 38
    TweakDBID hudVisibilityPreset; // 48
    bool usePreset; // 50
    bool visibility; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
};
RED4EXT_ASSERT_SIZE(SetHUDEntryVisibility_NodeType, 0x58);
} // namespace quest
using questSetHUDEntryVisibility_NodeType = quest::SetHUDEntryVisibility_NodeType;
} // namespace RED4ext

// clang-format on
