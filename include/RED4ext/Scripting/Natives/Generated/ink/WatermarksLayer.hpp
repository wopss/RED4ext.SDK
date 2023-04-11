#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink
{
struct WatermarksLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkWatermarksLayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WatermarksLayer, 0x150);
} // namespace ink
using inkWatermarksLayer = ink::WatermarksLayer;
} // namespace RED4ext

// clang-format on
