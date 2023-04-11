#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct StreamingSectorVariant
{
    static constexpr const char* NAME = "worldStreamingSectorVariant";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 00
    uint32_t variantId; // 08
    uint32_t parentVariantID; // 0C
    CName name; // 10
    uint32_t rangeIndex; // 18
    bool enabledByDefault; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
};
RED4EXT_ASSERT_SIZE(StreamingSectorVariant, 0x20);
} // namespace world
using worldStreamingSectorVariant = world::StreamingSectorVariant;
} // namespace RED4ext

// clang-format on
