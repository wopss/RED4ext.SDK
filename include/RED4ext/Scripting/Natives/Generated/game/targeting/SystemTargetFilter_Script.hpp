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
struct SystemTargetFilter_Script : game::targeting::SystemTargetFilter
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilter_Script";
    static constexpr const char* ALIAS = "TargetFilter_Script";

};
RED4EXT_ASSERT_SIZE(SystemTargetFilter_Script, 0x78);
} // namespace game::targeting
using gametargetingSystemTargetFilter_Script = game::targeting::SystemTargetFilter_Script;
using TargetFilter_Script = game::targeting::SystemTargetFilter_Script;
} // namespace RED4ext

// clang-format on
