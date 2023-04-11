#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/targeting/SystemTargetFilter.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct SystemTargetFilter_Closest : game::targeting::SystemTargetFilter
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilter_Closest";
    static constexpr const char* ALIAS = "TargetFilter_Closest";

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SystemTargetFilter_Closest, 0x80);
} // namespace game::targeting
using gametargetingSystemTargetFilter_Closest = game::targeting::SystemTargetFilter_Closest;
using TargetFilter_Closest = game::targeting::SystemTargetFilter_Closest;
} // namespace RED4ext

// clang-format on
