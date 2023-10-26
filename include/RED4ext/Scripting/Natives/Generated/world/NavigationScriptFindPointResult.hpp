#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NavigationRequestStatus.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) NavigationScriptFindPointResult
{
    static constexpr const char* NAME = "worldNavigationScriptFindPointResult";
    static constexpr const char* ALIAS = "NavigationFindPointResult";

    world::NavigationRequestStatus status; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    Vector4 point; // 10
};
RED4EXT_ASSERT_SIZE(NavigationScriptFindPointResult, 0x20);
} // namespace world
using worldNavigationScriptFindPointResult = world::NavigationScriptFindPointResult;
using NavigationFindPointResult = world::NavigationScriptFindPointResult;
} // namespace RED4ext

// clang-format on
