#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CompressedSmartObjectPointTransform
{
    static constexpr const char* NAME = "gameCompressedSmartObjectPointTransform";
    static constexpr const char* ALIAS = NAME;

    uint16_t transformId; // 00
};
RED4EXT_ASSERT_SIZE(CompressedSmartObjectPointTransform, 0x2);
} // namespace game
using gameCompressedSmartObjectPointTransform = game::CompressedSmartObjectPointTransform;
} // namespace RED4ext

// clang-format on
