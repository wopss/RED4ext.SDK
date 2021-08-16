#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/Component.hpp>

namespace RED4ext
{
namespace AI { 
struct CAgent : game::Component
{
    static constexpr const char* NAME = "AICAgent";
    static constexpr const char* ALIAS = "AIComponent";

    uint8_t unkA8[0xA10 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(CAgent, 0xA10);
} // namespace AI
using AIComponent = AI::CAgent;
} // namespace RED4ext
