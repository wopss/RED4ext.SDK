#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineResultVector
{
    static constexpr const char* NAME = "gamestateMachineResultVector";
    static constexpr const char* ALIAS = "StateResultVector";

    bool valid; // 00
    uint8_t unk01[0x10 - 0x1]; // 1
    Vector4 value; // 10
};
RED4EXT_ASSERT_SIZE(MachineResultVector, 0x20);
} // namespace game::state
using gamestateMachineResultVector = game::state::MachineResultVector;
using StateResultVector = game::state::MachineResultVector;
} // namespace RED4ext

// clang-format on
