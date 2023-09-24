#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game
{
struct GarmentItemObject : game::ItemObject
{
    static constexpr const char* NAME = "gameGarmentItemObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x308 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(GarmentItemObject, 0x308);
} // namespace game
using gameGarmentItemObject = game::GarmentItemObject;
} // namespace RED4ext

// clang-format on
