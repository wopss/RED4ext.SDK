#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>

namespace RED4ext
{
namespace game::damage { struct ServerHitData; }
namespace game::damage { struct ServerKillData; }

namespace game
{
struct DamageSystemSharedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gameDamageSystemSharedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::damage::ServerHitData>> hitHistory; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
    DynArray<Handle<game::damage::ServerKillData>> killHistory; // 58
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(DamageSystemSharedState, 0x70);
} // namespace game
using gameDamageSystemSharedState = game::DamageSystemSharedState;
} // namespace RED4ext

// clang-format on
