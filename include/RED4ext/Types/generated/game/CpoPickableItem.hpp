#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct CpoPickableItem : game::Object
{
    static constexpr const char* NAME = "gameCpoPickableItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemIDToEquip; // 228
    int32_t quickSlotID; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(CpoPickableItem, 0x238);
} // namespace game
} // namespace RED4ext
