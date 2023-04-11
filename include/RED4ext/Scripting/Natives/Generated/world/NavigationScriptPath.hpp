#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world
{
struct NavigationScriptPath : IScriptable
{
    static constexpr const char* NAME = "worldNavigationScriptPath";
    static constexpr const char* ALIAS = "NavigationPath";

    DynArray<Vector4> path; // 40
};
RED4EXT_ASSERT_SIZE(NavigationScriptPath, 0x50);
} // namespace world
using worldNavigationScriptPath = world::NavigationScriptPath;
using NavigationPath = world::NavigationScriptPath;
} // namespace RED4ext

// clang-format on
