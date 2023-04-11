#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace cp
{
struct SplinePlacementProvider : ISerializable
{
    static constexpr const char* NAME = "cpSplinePlacementProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SplinePlacementProvider, 0x38);
} // namespace cp
using cpSplinePlacementProvider = cp::SplinePlacementProvider;
} // namespace RED4ext

// clang-format on
