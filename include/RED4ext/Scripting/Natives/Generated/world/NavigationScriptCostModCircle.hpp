#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) NavigationScriptCostModCircle : IScriptable
{
    static constexpr const char* NAME = "worldNavigationScriptCostModCircle";
    static constexpr const char* ALIAS = "NavigationCostModCircle";

    Vector4 pos; // 40
    float range; // 50
    float cost; // 54
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(NavigationScriptCostModCircle, 0x60);
} // namespace world
using worldNavigationScriptCostModCircle = world::NavigationScriptCostModCircle;
using NavigationCostModCircle = world::NavigationScriptCostModCircle;
} // namespace RED4ext

// clang-format on
