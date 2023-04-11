#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IDebugDrawHistorySystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDebugDrawHistorySystem";
    static constexpr const char* ALIAS = "IDebugDrawHistorySystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IDebugDrawHistorySystem, 0x50);
} // namespace game
using gameIDebugDrawHistorySystem = game::IDebugDrawHistorySystem;
using IDebugDrawHistorySystem = game::IDebugDrawHistorySystem;
} // namespace RED4ext

// clang-format on
