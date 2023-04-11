#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct WaitForAnyKeyLoadingScreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questWaitForAnyKeyLoadingScreen_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WaitForAnyKeyLoadingScreen_NodeType, 0x38);
} // namespace quest
using questWaitForAnyKeyLoadingScreen_NodeType = quest::WaitForAnyKeyLoadingScreen_NodeType;
} // namespace RED4ext

// clang-format on
