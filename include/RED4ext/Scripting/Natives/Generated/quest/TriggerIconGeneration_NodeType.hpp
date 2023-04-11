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
struct TriggerIconGeneration_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questTriggerIconGeneration_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TriggerIconGeneration_NodeType, 0x38);
} // namespace quest
using questTriggerIconGeneration_NodeType = quest::TriggerIconGeneration_NodeType;
} // namespace RED4ext

// clang-format on
