#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISquadManager.hpp>

namespace RED4ext
{
namespace AI { 
struct SquadManager : AI::ISquadManager
{
    static constexpr const char* NAME = "AISquadManager";
    static constexpr const char* ALIAS = "SquadManager";

    uint8_t unk400[0x4C0 - 0x400]; // 400
};
RED4EXT_ASSERT_SIZE(SquadManager, 0x4C0);
} // namespace AI
using SquadManager = AI::SquadManager;
} // namespace RED4ext
