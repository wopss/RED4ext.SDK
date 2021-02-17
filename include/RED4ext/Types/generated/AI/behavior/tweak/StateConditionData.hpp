#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak { 
struct StateConditionData
{
    static constexpr const char* NAME = "AIbehaviortweakStateConditionData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StateConditionData, 0x50);
} // namespace AI::behavior::tweak
} // namespace RED4ext
