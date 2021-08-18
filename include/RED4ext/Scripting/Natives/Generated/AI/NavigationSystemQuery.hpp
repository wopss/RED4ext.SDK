#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/PositionSpec.hpp>

namespace RED4ext
{
namespace AI { 
struct NavigationSystemQuery
{
    static constexpr const char* NAME = "AINavigationSystemQuery";
    static constexpr const char* ALIAS = NAME;

    AI::PositionSpec source; // 00
    AI::PositionSpec target; // 28
    float minDesiredDistance; // 50
    float maxDesiredDistance; // 54
    DynArray<CName> allowedTags; // 58
    DynArray<CName> blockedTags; // 68
    bool useFollowSlots; // 78
    bool usePredictionTime; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(NavigationSystemQuery, 0x80);
} // namespace AI
} // namespace RED4ext
