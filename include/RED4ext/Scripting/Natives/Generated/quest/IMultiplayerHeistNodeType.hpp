#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/INodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IMultiplayerHeistNodeType : quest::INodeType
{
    static constexpr const char* NAME = "questIMultiplayerHeistNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMultiplayerHeistNodeType, 0x30);
} // namespace quest
using questIMultiplayerHeistNodeType = quest::IMultiplayerHeistNodeType;
} // namespace RED4ext

// clang-format on
