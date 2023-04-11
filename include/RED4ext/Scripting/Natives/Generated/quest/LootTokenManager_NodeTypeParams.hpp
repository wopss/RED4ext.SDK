#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LootTokenState.hpp>

namespace RED4ext
{
namespace quest
{
struct LootTokenManager_NodeTypeParams
{
    static constexpr const char* NAME = "questLootTokenManager_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef tokenNodeRef; // 00
    quest::LootTokenState lootTokenState; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(LootTokenManager_NodeTypeParams, 0x10);
} // namespace quest
using questLootTokenManager_NodeTypeParams = quest::LootTokenManager_NodeTypeParams;
} // namespace RED4ext

// clang-format on
