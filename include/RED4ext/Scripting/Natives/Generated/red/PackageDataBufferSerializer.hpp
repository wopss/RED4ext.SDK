#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/PackageCustomTypeSerializer.hpp>

namespace RED4ext
{
namespace red { 
struct PackageDataBufferSerializer : red::PackageCustomTypeSerializer
{
    static constexpr const char* NAME = "redPackageDataBufferSerializer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PackageDataBufferSerializer, 0x8);
} // namespace red
} // namespace RED4ext
