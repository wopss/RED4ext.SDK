#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetInputActionType.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionRangedAttack : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionRangedAttack";
    static constexpr const char* ALIAS = NAME;

    game::MuppetInputActionType actionType; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(MuppetInputActionRangedAttack, 0x10);
} // namespace game
using gameMuppetInputActionRangedAttack = game::MuppetInputActionRangedAttack;
} // namespace RED4ext

// clang-format on
