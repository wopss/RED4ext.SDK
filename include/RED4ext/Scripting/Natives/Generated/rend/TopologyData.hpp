#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace rend
{
struct TopologyData
{
    static constexpr const char* NAME = "rendTopologyData";
    static constexpr const char* ALIAS = NAME;

    uint32_t dataStride; // 00
    uint32_t metadataStride; // 04
    DynArray<uint8_t> data; // 08
    DynArray<uint8_t> metadata; // 18
};
RED4EXT_ASSERT_SIZE(TopologyData, 0x28);
} // namespace rend
using rendTopologyData = rend::TopologyData;
} // namespace RED4ext

// clang-format on
