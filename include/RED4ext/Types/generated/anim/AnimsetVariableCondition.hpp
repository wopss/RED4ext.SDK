#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/anim/IRuntimeCondition.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimsetVariableCondition : anim::IRuntimeCondition
{
    static constexpr const char* NAME = "animAnimsetVariableCondition";
    static constexpr const char* ALIAS = NAME;

    CName variableToCompare; // 30
    float valueToCompare; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(AnimsetVariableCondition, 0x40);
} // namespace anim
} // namespace RED4ext
