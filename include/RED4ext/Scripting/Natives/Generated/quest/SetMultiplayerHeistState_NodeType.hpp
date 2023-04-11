#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IMultiplayerHeistNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MultiplayerHeistState.hpp>

namespace RED4ext
{
namespace quest
{
struct SetMultiplayerHeistState_NodeType : quest::IMultiplayerHeistNodeType
{
    static constexpr const char* NAME = "questSetMultiplayerHeistState_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::MultiplayerHeistState state; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(SetMultiplayerHeistState_NodeType, 0x38);
} // namespace quest
using questSetMultiplayerHeistState_NodeType = quest::SetMultiplayerHeistState_NodeType;
} // namespace RED4ext

// clang-format on
