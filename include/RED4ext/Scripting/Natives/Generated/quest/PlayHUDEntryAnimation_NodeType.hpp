#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayHUDEntryAnimation_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questPlayHUDEntryAnimation_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName hudEntryName; // 38
    CName animationName; // 40
    bool dependsOnTimeDilation; // 48
    uint8_t unk49[0x60 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(PlayHUDEntryAnimation_NodeType, 0x60);
} // namespace quest
using questPlayHUDEntryAnimation_NodeType = quest::PlayHUDEntryAnimation_NodeType;
} // namespace RED4ext

// clang-format on
