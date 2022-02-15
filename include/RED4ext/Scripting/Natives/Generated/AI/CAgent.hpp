#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace AI { 
struct CAgent : game::Component
{
    static constexpr const char* NAME = "AICAgent";
    static constexpr const char* ALIAS = "AIComponent";

    uint8_t unkA8[0x4E8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(CAgent, 0x4E8);
} // namespace AI
using AIComponent = AI::CAgent;
} // namespace RED4ext
