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
struct PackageTweakDBIDSerializer : red::PackageCustomTypeSerializer
{
    static constexpr const char* NAME = "redPackageTweakDBIDSerializer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PackageTweakDBIDSerializer, 0x8);
} // namespace red
using redPackageTweakDBIDSerializer = red::PackageTweakDBIDSerializer;
} // namespace RED4ext

// clang-format on
