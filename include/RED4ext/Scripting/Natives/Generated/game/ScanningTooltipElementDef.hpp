#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningTooltipElementDef
{
    static constexpr const char* NAME = "gameScanningTooltipElementDef";
    static constexpr const char* ALIAS = "ScanningTooltipElementDef";

    TweakDBID recordID; // 00
    float timePct; // 08
};
RED4EXT_ASSERT_SIZE(ScanningTooltipElementDef, 0xC);
} // namespace game
using gameScanningTooltipElementDef = game::ScanningTooltipElementDef;
using ScanningTooltipElementDef = game::ScanningTooltipElementDef;
} // namespace RED4ext

// clang-format on
