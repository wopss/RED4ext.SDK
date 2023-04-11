#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IRenderFxManagerNodeType; }

namespace quest
{
struct RenderFxManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questRenderFxManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IRenderFxManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(RenderFxManagerNodeDefinition, 0x58);
} // namespace quest
using questRenderFxManagerNodeDefinition = quest::RenderFxManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
