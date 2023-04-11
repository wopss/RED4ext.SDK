#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct DisableTeleportingMonitoring_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questDisableTeleportingMonitoring_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DisableTeleportingMonitoring_NodeType, 0x38);
} // namespace quest
using questDisableTeleportingMonitoring_NodeType = quest::DisableTeleportingMonitoring_NodeType;
} // namespace RED4ext

// clang-format on
