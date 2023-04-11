#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct CombatNodeParams_RestrictMovementToArea : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_RestrictMovementToArea";
    static constexpr const char* ALIAS = NAME;

    NodeRef area; // 40
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_RestrictMovementToArea, 0x48);
} // namespace quest
using questCombatNodeParams_RestrictMovementToArea = quest::CombatNodeParams_RestrictMovementToArea;
} // namespace RED4ext

// clang-format on
