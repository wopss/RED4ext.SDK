#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct PickupObject : game::Object
{
    static constexpr const char* NAME = "gamePickupObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x260 - 0x240]; // 240
    CName interactionTag; // 260
};
RED4EXT_ASSERT_SIZE(PickupObject, 0x268);
} // namespace game
using gamePickupObject = game::PickupObject;
} // namespace RED4ext

// clang-format on
