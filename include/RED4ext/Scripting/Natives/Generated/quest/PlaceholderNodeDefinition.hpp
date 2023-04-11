#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PlaceholderNodeSocketInfo.hpp>

namespace RED4ext
{
struct ISerializable;

namespace quest
{
struct PlaceholderNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questPlaceholderNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName replacedNodeClassName; // 48
    DynArray<quest::PlaceholderNodeSocketInfo> copiedSockets; // 50
    Handle<ISerializable> clipboardHolder; // 60
};
RED4EXT_ASSERT_SIZE(PlaceholderNodeDefinition, 0x70);
} // namespace quest
using questPlaceholderNodeDefinition = quest::PlaceholderNodeDefinition;
} // namespace RED4ext

// clang-format on
