#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IsInMirrorsAreaMapArrayElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/NodeCollisionMapArrayElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/NodeVisibilityMapArrayElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PrefabVariantMapArrayElement.hpp>

namespace RED4ext
{
namespace quest
{
struct WorldStateSystemReplicatedState
{
    static constexpr const char* NAME = "questWorldStateSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<quest::NodeVisibilityMapArrayElement> nodeVisibilityMapArray; // 08
    DynArray<quest::IsInMirrorsAreaMapArrayElement> isInMirrorsAreaMapArray; // 18
    DynArray<quest::NodeCollisionMapArrayElement> nodeCollisionMapArray; // 28
    DynArray<quest::PrefabVariantMapArrayElement> prefabVariants; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldStateSystemReplicatedState, 0x58);
} // namespace quest
using questWorldStateSystemReplicatedState = quest::WorldStateSystemReplicatedState;
} // namespace RED4ext

// clang-format on
