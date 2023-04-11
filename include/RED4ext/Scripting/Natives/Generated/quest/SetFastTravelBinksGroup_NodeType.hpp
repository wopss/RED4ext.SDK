#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetFastTravelBinksGroup_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetFastTravelBinksGroup_NodeType";
    static constexpr const char* ALIAS = NAME;

    TweakDBID selectedBinkDataGroup; // 38
};
RED4EXT_ASSERT_SIZE(SetFastTravelBinksGroup_NodeType, 0x40);
} // namespace quest
using questSetFastTravelBinksGroup_NodeType = quest::SetFastTravelBinksGroup_NodeType;
} // namespace RED4ext

// clang-format on
