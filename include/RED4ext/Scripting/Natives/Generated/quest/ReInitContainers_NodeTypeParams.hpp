#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct ReInitContainers_NodeTypeParams
{
    static constexpr const char* NAME = "questReInitContainers_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef containerNodeRef; // 00
    DynArray<TweakDBID> lootTables; // 08
    bool useAreaLoot; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(ReInitContainers_NodeTypeParams, 0x20);
} // namespace quest
using questReInitContainers_NodeTypeParams = quest::ReInitContainers_NodeTypeParams;
} // namespace RED4ext

// clang-format on
