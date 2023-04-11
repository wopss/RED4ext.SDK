#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITimeState.hpp>

namespace RED4ext
{
namespace game
{
struct FinalTimeState : game::ITimeState
{
    static constexpr const char* NAME = "gameFinalTimeState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(FinalTimeState, 0x38);
} // namespace game
using gameFinalTimeState = game::FinalTimeState;
} // namespace RED4ext

// clang-format on
