#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/PackageCustomTypeSerializer.hpp>

namespace RED4ext
{
namespace world
{
struct PackageNodeRefSerializer : red::PackageCustomTypeSerializer
{
    static constexpr const char* NAME = "worldPackageNodeRefSerializer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PackageNodeRefSerializer, 0x8);
} // namespace world
using worldPackageNodeRefSerializer = world::PackageNodeRefSerializer;
} // namespace RED4ext

// clang-format on
