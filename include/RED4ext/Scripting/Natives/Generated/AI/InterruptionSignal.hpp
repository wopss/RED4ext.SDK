#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/EInterruptionImportance.hpp>

namespace RED4ext
{
namespace AI
{
struct InterruptionSignal
{
    static constexpr const char* NAME = "AIInterruptionSignal";
    static constexpr const char* ALIAS = NAME;

    AI::EInterruptionImportance importance; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName signal; // 08
};
RED4EXT_ASSERT_SIZE(InterruptionSignal, 0x10);
} // namespace AI
using AIInterruptionSignal = AI::InterruptionSignal;
} // namespace RED4ext

// clang-format on
