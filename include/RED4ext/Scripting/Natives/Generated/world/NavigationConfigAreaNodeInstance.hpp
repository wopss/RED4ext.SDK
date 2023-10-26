#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) NavigationConfigAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldNavigationConfigAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NavigationConfigAreaNodeInstance, 0xD0);
} // namespace world
using worldNavigationConfigAreaNodeInstance = world::NavigationConfigAreaNodeInstance;
} // namespace RED4ext

// clang-format on
