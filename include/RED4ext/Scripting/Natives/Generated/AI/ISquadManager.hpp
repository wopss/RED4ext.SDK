#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct ISquadManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIISquadManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ISquadManager, 0x80);
} // namespace AI
using AIISquadManager = AI::ISquadManager;
} // namespace RED4ext

// clang-format on
