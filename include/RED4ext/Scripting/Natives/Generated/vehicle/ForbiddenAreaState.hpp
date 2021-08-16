#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ForbiddenAreaState
{
    static constexpr const char* NAME = "vehicleForbiddenAreaState";
    static constexpr const char* ALIAS = NAME;

    uint64_t globalNodeIDHash; // 00
    bool enabled; // 08
    bool dismount; // 09
    uint8_t unk0A[0x10 - 0xA]; // A
};
RED4EXT_ASSERT_SIZE(ForbiddenAreaState, 0x10);
} // namespace vehicle
} // namespace RED4ext
