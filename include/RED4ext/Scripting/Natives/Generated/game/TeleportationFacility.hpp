#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITeleportationFacility.hpp>

namespace RED4ext
{
namespace game
{
struct TeleportationFacility : game::ITeleportationFacility
{
    static constexpr const char* NAME = "gameTeleportationFacility";
    static constexpr const char* ALIAS = "TeleportationFacility";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TeleportationFacility, 0x80);
} // namespace game
using gameTeleportationFacility = game::TeleportationFacility;
using TeleportationFacility = game::TeleportationFacility;
} // namespace RED4ext

// clang-format on
