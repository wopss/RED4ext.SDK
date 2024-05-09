#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PrefabVariantReplicatedInfo.hpp>

namespace RED4ext
{
namespace quest
{
struct PrefabVariantMapArrayElement
{
    static constexpr const char* NAME = "questPrefabVariantMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeRef globalNodeRef; // 00
    DynArray<quest::PrefabVariantReplicatedInfo> PrefabVariantsReplicatedInfos; // 08
};
RED4EXT_ASSERT_SIZE(PrefabVariantMapArrayElement, 0x18);
} // namespace quest
using questPrefabVariantMapArrayElement = quest::PrefabVariantMapArrayElement;
} // namespace RED4ext

// clang-format on
