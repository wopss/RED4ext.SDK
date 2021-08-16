#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace ink { 
struct OnscreenVOData
{
    static constexpr const char* NAME = "inkOnscreenVOData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
    CRUID text; // 28
};
RED4EXT_ASSERT_SIZE(OnscreenVOData, 0x30);
} // namespace ink
} // namespace RED4ext
