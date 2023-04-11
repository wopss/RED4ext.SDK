#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LootTokenManager_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct LootTokenManager_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questLootTokenManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::LootTokenManager_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(LootTokenManager_NodeType, 0x40);
} // namespace quest
using questLootTokenManager_NodeType = quest::LootTokenManager_NodeType;
} // namespace RED4ext

// clang-format on
