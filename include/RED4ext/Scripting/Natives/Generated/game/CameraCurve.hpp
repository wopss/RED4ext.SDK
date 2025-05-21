#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class CameraCurve : int32_t
{
    CentricPitchOfSpeed = 0,
    CentricVerticalOffsetOfSpeed = 1,
    BoomLengthOfSpeed = 2,
    BoomLengthOfAcc = 3,
    BoomPitchOfSpeed = 4,
    BoomPitchOfGlobalVehiclePitch = 5,
    BoomYawOfTurnCoeff = 6,
    BoomYawRotateRateOfSpeed = 7,
    FOVOfSpeed = 8,
    PivotOffsetXOfTurnCoeff = 9,
    PivotOffsetZOfTurnCoeff = 10,
    COUNT = 11,
};
} // namespace game
using gameCameraCurve = game::CameraCurve;
} // namespace RED4ext

// clang-format on
