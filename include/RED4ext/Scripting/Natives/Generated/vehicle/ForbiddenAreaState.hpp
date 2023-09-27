#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ForbiddenAreaState
{
    static constexpr const char* NAME = "vehicleForbiddenAreaState";
    static constexpr const char* ALIAS = NAME;

    uint64_t globalNodeIDHash; // 00
    bool enabled; // 08
    bool dismount; // 09
    bool blockCombat; // 0A
    uint8_t unk0B[0x10 - 0xB]; // B
};
RED4EXT_ASSERT_SIZE(ForbiddenAreaState, 0x10);
} // namespace vehicle
using vehicleForbiddenAreaState = vehicle::ForbiddenAreaState;
} // namespace RED4ext

// clang-format on
