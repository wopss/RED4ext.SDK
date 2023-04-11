#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IFactsDBManagerNodeType; }

namespace quest
{
struct FactsDBManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questFactsDBManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IFactsDBManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(FactsDBManagerNodeDefinition, 0x58);
} // namespace quest
using questFactsDBManagerNodeDefinition = quest::FactsDBManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
