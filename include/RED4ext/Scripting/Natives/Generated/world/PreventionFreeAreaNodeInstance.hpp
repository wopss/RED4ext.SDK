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
struct __declspec(align(0x10)) PreventionFreeAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldPreventionFreeAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PreventionFreeAreaNodeInstance, 0xD0);
} // namespace world
using worldPreventionFreeAreaNodeInstance = world::PreventionFreeAreaNodeInstance;
} // namespace RED4ext

// clang-format on
