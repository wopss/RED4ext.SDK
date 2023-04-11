#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct EquipRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameEquipRequest";
    static constexpr const char* ALIAS = "EquipRequest";

    ItemID itemID; // 58
    int32_t slotIndex; // 68
    bool addToInventory; // 6C
    bool equipToCurrentActiveSlot; // 6D
    uint8_t unk6E[0x70 - 0x6E]; // 6E
};
RED4EXT_ASSERT_SIZE(EquipRequest, 0x70);
} // namespace game
using gameEquipRequest = game::EquipRequest;
using EquipRequest = game::EquipRequest;
} // namespace RED4ext

// clang-format on
