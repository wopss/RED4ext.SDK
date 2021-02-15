#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/SmartSpotInstance.hpp>

namespace RED4ext
{
namespace AI { 
struct BehaviourSpotInstance : AI::SmartSpotInstance
{
    static constexpr const char* NAME = "AIBehaviourSpotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(BehaviourSpotInstance, 0x28);
} // namespace AI
} // namespace RED4ext
