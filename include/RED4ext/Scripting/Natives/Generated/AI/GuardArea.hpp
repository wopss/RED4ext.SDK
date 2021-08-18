#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI { 
struct GuardArea
{
    static constexpr const char* NAME = "AIGuardArea";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xA0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GuardArea, 0xA0);
} // namespace AI
} // namespace RED4ext
