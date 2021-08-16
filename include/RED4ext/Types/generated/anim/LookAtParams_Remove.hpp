#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { 
struct LookAtParams_Remove : ISerializable
{
    static constexpr const char* NAME = "animLookAtParams_Remove";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LookAtParams_Remove, 0x48);
} // namespace anim
} // namespace RED4ext
