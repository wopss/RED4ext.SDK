#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class ObjectActionType : int32_t
{
    DeviceQuickHack = 0,
    Direct = 1,
    Item = 2,
    MinigameUpload = 3,
    Payment = 4,
    PuppetQuickHack = 5,
    Remote = 6,
    VehicleQuickHack = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game::data
using gamedataObjectActionType = game::data::ObjectActionType;
} // namespace RED4ext

// clang-format on
