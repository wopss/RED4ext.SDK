#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) OffMeshConnectionNodeInstance : world::SplineNodeInstance
{
    static constexpr const char* NAME = "worldOffMeshConnectionNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OffMeshConnectionNodeInstance, 0xE0);
} // namespace world
using worldOffMeshConnectionNodeInstance = world::OffMeshConnectionNodeInstance;
} // namespace RED4ext

// clang-format on
