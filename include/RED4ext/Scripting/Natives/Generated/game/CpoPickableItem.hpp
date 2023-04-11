#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct CpoPickableItem : game::Object
{
    static constexpr const char* NAME = "gameCpoPickableItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemIDToEquip; // 240
    int32_t quickSlotID; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
};
RED4EXT_ASSERT_SIZE(CpoPickableItem, 0x250);
} // namespace game
using gameCpoPickableItem = game::CpoPickableItem;
} // namespace RED4ext

// clang-format on
