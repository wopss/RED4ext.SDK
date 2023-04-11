#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SignalFlags.hpp>

namespace RED4ext
{
namespace AI
{
struct GateSignal
{
    static constexpr const char* NAME = "AIGateSignal";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 4> tags; // 00
    AI::SignalFlags flags; // 28
    float priority; // 2C
    float lifeTime; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(GateSignal, 0x38);
} // namespace AI
using AIGateSignal = AI::GateSignal;
} // namespace RED4ext

// clang-format on
