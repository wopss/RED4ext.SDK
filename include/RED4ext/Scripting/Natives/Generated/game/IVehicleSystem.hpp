#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IVehicleSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIVehicleSystem";
    static constexpr const char* ALIAS = "IVehicleSystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IVehicleSystem, 0x50);
} // namespace game
using gameIVehicleSystem = game::IVehicleSystem;
using IVehicleSystem = game::IVehicleSystem;
} // namespace RED4ext

// clang-format on
