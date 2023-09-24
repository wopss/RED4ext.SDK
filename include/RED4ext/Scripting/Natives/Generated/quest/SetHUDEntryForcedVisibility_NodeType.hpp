#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/EntryVisibility.hpp>

namespace RED4ext
{
namespace quest
{
struct SetHUDEntryForcedVisibility_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetHUDEntryForcedVisibility_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> hudEntryName; // 38
    TweakDBID hudVisibilityPreset; // 48
    bool usePreset; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    world::ui::EntryVisibility visibility; // 54
    bool skipAnimation; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(SetHUDEntryForcedVisibility_NodeType, 0x60);
} // namespace quest
using questSetHUDEntryForcedVisibility_NodeType = quest::SetHUDEntryForcedVisibility_NodeType;
} // namespace RED4ext

// clang-format on
