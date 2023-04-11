#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilter_Closest.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct TargetFilter_Logical : game::targeting::SystemTargetFilter_Closest
{
    static constexpr const char* NAME = "gameinteractionsTargetFilter_Logical";
    static constexpr const char* ALIAS = "TargetFilter_Logical";

};
RED4EXT_ASSERT_SIZE(TargetFilter_Logical, 0x80);
} // namespace game::interactions
using gameinteractionsTargetFilter_Logical = game::interactions::TargetFilter_Logical;
using TargetFilter_Logical = game::interactions::TargetFilter_Logical;
} // namespace RED4ext

// clang-format on
