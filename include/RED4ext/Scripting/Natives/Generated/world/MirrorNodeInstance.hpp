#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) MirrorNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldMirrorNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MirrorNodeInstance, 0x100);
} // namespace world
using worldMirrorNodeInstance = world::MirrorNodeInstance;
} // namespace RED4ext

// clang-format on
