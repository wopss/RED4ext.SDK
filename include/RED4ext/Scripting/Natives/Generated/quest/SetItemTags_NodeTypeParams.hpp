#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EItemDynamicTags.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct SetItemTags_NodeTypeParams
{
    static constexpr const char* NAME = "questSetItemTags_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> objectRef; // 00
    TweakDBID itemId; // 10
    bool addTags; // 18
    game::EItemDynamicTags tags; // 19
    uint8_t unk1A[0x20 - 0x1A]; // 1A
};
RED4EXT_ASSERT_SIZE(SetItemTags_NodeTypeParams, 0x20);
} // namespace quest
using questSetItemTags_NodeTypeParams = quest::SetItemTags_NodeTypeParams;
} // namespace RED4ext

// clang-format on
