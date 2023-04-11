#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipAnimationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct DrawItemRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameDrawItemRequest";
    static constexpr const char* ALIAS = "DrawItemRequest";

    ItemID itemID; // 58
    game::EquipAnimationType equipAnimationType; // 68
    bool assignOnly; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(DrawItemRequest, 0x70);
} // namespace game
using gameDrawItemRequest = game::DrawItemRequest;
using DrawItemRequest = game::DrawItemRequest;
} // namespace RED4ext

// clang-format on
