#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NavigationRequestStatus.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) NavigationScriptFindWallResult : IScriptable
{
    static constexpr const char* NAME = "worldNavigationScriptFindWallResult";
    static constexpr const char* ALIAS = "NavigationFindWallResult";

    world::NavigationRequestStatus status; // 40
    bool isHit; // 44
    uint8_t unk45[0x50 - 0x45]; // 45
    Vector4 hitPosition; // 50
};
RED4EXT_ASSERT_SIZE(NavigationScriptFindWallResult, 0x60);
} // namespace world
using worldNavigationScriptFindWallResult = world::NavigationScriptFindWallResult;
using NavigationFindWallResult = world::NavigationScriptFindWallResult;
} // namespace RED4ext

// clang-format on
