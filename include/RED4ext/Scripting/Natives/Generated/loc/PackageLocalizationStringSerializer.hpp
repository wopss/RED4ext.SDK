#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/PackageCustomTypeSerializer.hpp>

namespace RED4ext
{
namespace loc
{
struct PackageLocalizationStringSerializer : red::PackageCustomTypeSerializer
{
    static constexpr const char* NAME = "locPackageLocalizationStringSerializer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(PackageLocalizationStringSerializer, 0x10);
} // namespace loc
using locPackageLocalizationStringSerializer = loc::PackageLocalizationStringSerializer;
} // namespace RED4ext

// clang-format on
