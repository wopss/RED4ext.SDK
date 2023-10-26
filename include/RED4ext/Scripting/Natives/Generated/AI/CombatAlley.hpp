#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) CombatAlley : IScriptable
{
    static constexpr const char* NAME = "AICombatAlley";
    static constexpr const char* ALIAS = "CombatAlley";

    uint8_t unk40[0xD0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CombatAlley, 0xD0);
} // namespace AI
using AICombatAlley = AI::CombatAlley;
using CombatAlley = AI::CombatAlley;
} // namespace RED4ext

// clang-format on
