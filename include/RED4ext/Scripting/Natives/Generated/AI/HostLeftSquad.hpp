#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI { struct SquadScriptInterface; }

namespace AI
{
struct HostLeftSquad : AI::AIEvent
{
    static constexpr const char* NAME = "AIHostLeftSquad";
    static constexpr const char* ALIAS = "HostLeftSquad";

    WeakHandle<AI::SquadScriptInterface> squadInterface; // 50
};
RED4EXT_ASSERT_SIZE(HostLeftSquad, 0x60);
} // namespace AI
using AIHostLeftSquad = AI::HostLeftSquad;
using HostLeftSquad = AI::HostLeftSquad;
} // namespace RED4ext

// clang-format on
