#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::targeting
{
struct SystemTargetFilter : IScriptable
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilter";
    static constexpr const char* ALIAS = "TargetFilter";

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SystemTargetFilter, 0x78);
} // namespace game::targeting
using gametargetingSystemTargetFilter = game::targeting::SystemTargetFilter;
using TargetFilter = game::targeting::SystemTargetFilter;
} // namespace RED4ext

// clang-format on
