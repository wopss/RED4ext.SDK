#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilter_Closest.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct TargetFilter_Logical : game::targeting::SystemTargetFilter_Closest
{
    static constexpr const char* NAME = "gameinteractionsTargetFilter_Logical";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TargetFilter_Logical, 0x80);
} // namespace game::interactions
} // namespace RED4ext
