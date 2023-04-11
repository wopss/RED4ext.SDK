#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CompressedSmartObjectPointProperties
{
    static constexpr const char* NAME = "gameCompressedSmartObjectPointProperties";
    static constexpr const char* ALIAS = NAME;

    uint16_t propertyId; // 00
};
RED4EXT_ASSERT_SIZE(CompressedSmartObjectPointProperties, 0x2);
} // namespace game
using gameCompressedSmartObjectPointProperties = game::CompressedSmartObjectPointProperties;
} // namespace RED4ext

// clang-format on
