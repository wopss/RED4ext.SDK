#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { 
struct GarmentItemObject : game::ItemObject
{
    static constexpr const char* NAME = "gameGarmentItemObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk318[0x350 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(GarmentItemObject, 0x350);
} // namespace game
} // namespace RED4ext
