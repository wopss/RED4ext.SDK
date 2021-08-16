#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct CompressedSmartObjectPointTransform
{
    static constexpr const char* NAME = "gameCompressedSmartObjectPointTransform";
    static constexpr const char* ALIAS = NAME;

    uint16_t transformId; // 00
};
RED4EXT_ASSERT_SIZE(CompressedSmartObjectPointTransform, 0x2);
} // namespace game
} // namespace RED4ext
