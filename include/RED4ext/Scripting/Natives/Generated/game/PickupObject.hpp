#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct PickupObject : game::Object
{
    static constexpr const char* NAME = "gamePickupObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x250 - 0x230]; // 230
    CName interactionTag; // 250
};
RED4EXT_ASSERT_SIZE(PickupObject, 0x258);
} // namespace game
} // namespace RED4ext
