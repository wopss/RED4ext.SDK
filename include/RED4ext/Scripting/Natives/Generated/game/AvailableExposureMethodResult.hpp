#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverExposureMethod.hpp>

namespace RED4ext
{
namespace game
{
struct AvailableExposureMethodResult
{
    static constexpr const char* NAME = "gameAvailableExposureMethodResult";
    static constexpr const char* ALIAS = NAME;

    float distanceToTarget; // 00
    uint8_t unk04[0x28 - 0x4]; // 4
    AI::CoverExposureMethod method; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(AvailableExposureMethodResult, 0x30);
} // namespace game
using gameAvailableExposureMethodResult = game::AvailableExposureMethodResult;
} // namespace RED4ext

// clang-format on
