#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDebugDrawHistorySystem.hpp>

namespace RED4ext
{
namespace game
{
struct DebugDrawHistorySystem : game::IDebugDrawHistorySystem
{
    static constexpr const char* NAME = "gameDebugDrawHistorySystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugDrawHistorySystem, 0x50);
} // namespace game
using gameDebugDrawHistorySystem = game::DebugDrawHistorySystem;
} // namespace RED4ext

// clang-format on
