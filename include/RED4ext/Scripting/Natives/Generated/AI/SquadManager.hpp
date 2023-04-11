#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISquadManager.hpp>

namespace RED4ext
{
namespace AI
{
struct SquadManager : AI::ISquadManager
{
    static constexpr const char* NAME = "AISquadManager";
    static constexpr const char* ALIAS = "SquadManager";

    uint8_t unk80[0x140 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(SquadManager, 0x140);
} // namespace AI
using AISquadManager = AI::SquadManager;
using SquadManager = AI::SquadManager;
} // namespace RED4ext

// clang-format on
