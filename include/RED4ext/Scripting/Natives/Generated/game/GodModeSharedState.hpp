#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GodModeSharedStateData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct GodModeSharedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gameGodModeSharedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::GodModeSharedStateData> datas; // 40
};
RED4EXT_ASSERT_SIZE(GodModeSharedState, 0x50);
} // namespace game
using gameGodModeSharedState = game::GodModeSharedState;
} // namespace RED4ext

// clang-format on
