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
struct CleanupNotifications_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questCleanupNotifications_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CleanupNotifications_NodeType, 0x38);
} // namespace quest
using questCleanupNotifications_NodeType = quest::CleanupNotifications_NodeType;
} // namespace RED4ext

// clang-format on
