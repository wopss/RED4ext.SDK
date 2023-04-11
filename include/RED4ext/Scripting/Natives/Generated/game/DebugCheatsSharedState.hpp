#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/cheatsystem/ObjCheats.hpp>

namespace RED4ext
{
namespace game
{
struct DebugCheatsSharedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gameDebugCheatsSharedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::cheatsystem::ObjCheats> activeCheats; // 40
    uint32_t debugTimeDilationIndex; // 50
    uint32_t debugTimeDilationPlayerIndex; // 54
};
RED4EXT_ASSERT_SIZE(DebugCheatsSharedState, 0x58);
} // namespace game
using gameDebugCheatsSharedState = game::DebugCheatsSharedState;
} // namespace RED4ext

// clang-format on
