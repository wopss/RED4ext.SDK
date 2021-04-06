#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct PickupObject : game::Object
{
    static constexpr const char* NAME = "gamePickupObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x248 - 0x228]; // 228
    CName interactionTag; // 248
};
RED4EXT_ASSERT_SIZE(PickupObject, 0x250);
} // namespace game
} // namespace RED4ext
