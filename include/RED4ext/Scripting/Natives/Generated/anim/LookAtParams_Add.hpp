#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { 
struct LookAtParams_Add : ISerializable
{
    static constexpr const char* NAME = "animLookAtParams_Add";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xB0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LookAtParams_Add, 0xB0);
} // namespace anim
} // namespace RED4ext
