#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningTooltipElementData
{
    static constexpr const char* NAME = "gameScanningTooltipElementData";
    static constexpr const char* ALIAS = "ScanningTooltipElementData";

    TweakDBID recordID; // 00
    CName localizedName; // 08
    CName localizedDescription; // 10
};
RED4EXT_ASSERT_SIZE(ScanningTooltipElementData, 0x18);
} // namespace game
using gameScanningTooltipElementData = game::ScanningTooltipElementData;
using ScanningTooltipElementData = game::ScanningTooltipElementData;
} // namespace RED4ext

// clang-format on
