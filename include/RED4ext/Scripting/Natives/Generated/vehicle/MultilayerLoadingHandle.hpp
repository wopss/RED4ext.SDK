#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct MultilayerLoadingHandle
{
    static constexpr const char* NAME = "vehicleMultilayerLoadingHandle";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x70 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MultilayerLoadingHandle, 0x70);
} // namespace vehicle
using vehicleMultilayerLoadingHandle = vehicle::MultilayerLoadingHandle;
} // namespace RED4ext

// clang-format on
