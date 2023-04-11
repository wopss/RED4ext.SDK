#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IVisionModeNodeType; }

namespace quest
{
struct VisionModesManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questVisionModesManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IVisionModeNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(VisionModesManagerNodeDefinition, 0x58);
} // namespace quest
using questVisionModesManagerNodeDefinition = quest::VisionModesManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
