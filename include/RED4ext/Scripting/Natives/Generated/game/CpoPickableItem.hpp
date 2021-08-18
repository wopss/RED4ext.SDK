#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct CpoPickableItem : game::Object
{
    static constexpr const char* NAME = "gameCpoPickableItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemIDToEquip; // 230
    int32_t quickSlotID; // 238
    uint8_t unk23C[0x240 - 0x23C]; // 23C
};
RED4EXT_ASSERT_SIZE(CpoPickableItem, 0x240);
} // namespace game
} // namespace RED4ext
