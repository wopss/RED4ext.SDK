#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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

    DynArray<Handle<game::PrereqState>> nestedStates; // 100
    uint8_t unk110[0x118 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(MultiPrereqState, 0x118);
} // namespace game
using gameMultiPrereqState = game::MultiPrereqState;
using MultiPrereqState = game::MultiPrereqState;
} // namespace RED4ext

// clang-format on
