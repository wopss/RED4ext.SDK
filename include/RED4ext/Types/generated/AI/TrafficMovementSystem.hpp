#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/ITrafficMovementSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct TrafficMovementSystem : AI::ITrafficMovementSystem
{
    static constexpr const char* NAME = "AITrafficMovementSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x110 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TrafficMovementSystem, 0x110);
} // namespace AI
} // namespace RED4ext
