#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemUnequipContexts.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct UnequipByContextRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameUnequipByContextRequest";
    static constexpr const char* ALIAS = "UnequipByContextRequest";

    game::ItemUnequipContexts itemUnequipContext; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(UnequipByContextRequest, 0x60);
} // namespace game
using gameUnequipByContextRequest = game::UnequipByContextRequest;
using UnequipByContextRequest = game::UnequipByContextRequest;
} // namespace RED4ext

// clang-format on
