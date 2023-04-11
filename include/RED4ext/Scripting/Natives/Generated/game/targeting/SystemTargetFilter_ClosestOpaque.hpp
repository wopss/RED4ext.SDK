#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilter_Closest.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct SystemTargetFilter_ClosestOpaque : game::targeting::SystemTargetFilter_Closest
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilter_ClosestOpaque";
    static constexpr const char* ALIAS = "TargetFilter_ClosestOpaque";

};
RED4EXT_ASSERT_SIZE(SystemTargetFilter_ClosestOpaque, 0x80);
} // namespace game::targeting
using gametargetingSystemTargetFilter_ClosestOpaque = game::targeting::SystemTargetFilter_ClosestOpaque;
using TargetFilter_ClosestOpaque = game::targeting::SystemTargetFilter_ClosestOpaque;
} // namespace RED4ext

// clang-format on
