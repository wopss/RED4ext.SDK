#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) DistantLightsNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldDistantLightsNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DistantLightsNodeInstance, 0x90);
} // namespace world
using worldDistantLightsNodeInstance = world::DistantLightsNodeInstance;
} // namespace RED4ext

// clang-format on
