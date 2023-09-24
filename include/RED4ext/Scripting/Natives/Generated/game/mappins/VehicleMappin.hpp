#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct VehicleMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsVehicleMappin";
    static constexpr const char* ALIAS = "VehicleMappin";

    uint8_t unk108[0x148 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(VehicleMappin, 0x148);
} // namespace game::mappins
using gamemappinsVehicleMappin = game::mappins::VehicleMappin;
using VehicleMappin = game::mappins::VehicleMappin;
} // namespace RED4ext

// clang-format on
