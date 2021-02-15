#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/MuppetStateMachineSnapshot.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetStateMachinesSnapshot
{
    static constexpr const char* NAME = "gameMuppetStateMachinesSnapshot";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::MuppetStateMachineSnapshot> stateMachines; // 00
};
RED4EXT_ASSERT_SIZE(MuppetStateMachinesSnapshot, 0x10);
} // namespace game
} // namespace RED4ext
