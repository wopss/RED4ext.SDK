#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { struct PrereqState; }

namespace game
{
struct MultiPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameMultiPrereqState";
    static constexpr const char* ALIAS = "MultiPrereqState";

    DynArray<Handle<game::PrereqState>> nestedStates; // C0
    uint8_t unkD0[0xD8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(MultiPrereqState, 0xD8);
} // namespace game
using gameMultiPrereqState = game::MultiPrereqState;
using MultiPrereqState = game::MultiPrereqState;
} // namespace RED4ext

// clang-format on
