#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/PackageCustomTypeSerializer.hpp>

namespace RED4ext
{
namespace red
{
struct PackageRUIDSerializer : red::PackageCustomTypeSerializer
{
    static constexpr const char* NAME = "redPackageRUIDSerializer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PackageRUIDSerializer, 0x8);
} // namespace red
using redPackageRUIDSerializer = red::PackageRUIDSerializer;
} // namespace RED4ext

// clang-format on
