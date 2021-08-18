#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI { 
struct HostJoinedSquad : AI::AIEvent
{
    static constexpr const char* NAME = "AIHostJoinedSquad";
    static constexpr const char* ALIAS = "HostJoinedSquad";

    CName squad; // 50
};
RED4EXT_ASSERT_SIZE(HostJoinedSquad, 0x58);
} // namespace AI
using HostJoinedSquad = AI::HostJoinedSquad;
} // namespace RED4ext
