#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NewMappinID.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct MappinSystemReplicatedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gamemappinsMappinSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::NewMappinID> mappinState; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    DynArray<uint32_t> mappinWithJournalState; // 60
    uint8_t unk70[0x80 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(MappinSystemReplicatedState, 0x80);
} // namespace game::mappins
using gamemappinsMappinSystemReplicatedState = game::mappins::MappinSystemReplicatedState;
} // namespace RED4ext

// clang-format on
