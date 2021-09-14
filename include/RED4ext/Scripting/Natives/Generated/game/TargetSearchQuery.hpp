#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TargetSearchFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TargetingSet.hpp>

namespace RED4ext
{
namespace game { 
struct TargetSearchQuery
{
    static constexpr const char* NAME = "gameTargetSearchQuery";
    static constexpr const char* ALIAS = "TargetSearchQuery";

    game::TargetingSet testedSet; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::TargetSearchFilter searchFilter; // 08
    uint8_t unk20[0x21 - 0x20]; // 20
    bool includeSecondaryTargets; // 21
    bool ignoreInstigator; // 22
    uint8_t unk23[0x24 - 0x23]; // 23
    float maxDistance; // 24
    ent::EntityID queryTarget; // 28
    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TargetSearchQuery, 0x38);
} // namespace game
using TargetSearchQuery = game::TargetSearchQuery;
} // namespace RED4ext
