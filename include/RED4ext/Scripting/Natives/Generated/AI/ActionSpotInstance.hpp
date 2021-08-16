#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SmartSpotInstance.hpp>

namespace RED4ext
{
namespace AI { 
struct ActionSpotInstance : AI::SmartSpotInstance
{
    static constexpr const char* NAME = "AIActionSpotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0xB0 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ActionSpotInstance, 0xB0);
} // namespace AI
} // namespace RED4ext
