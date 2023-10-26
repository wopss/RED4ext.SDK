#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) NearestRoadFromPlayerInfo
{
    static constexpr const char* NAME = "gameNearestRoadFromPlayerInfo";
    static constexpr const char* ALIAS = "NearestRoadFromPlayerInfo";

    float pathLength; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    Vector4 point; // 10
    uint8_t unk20[0x30 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(NearestRoadFromPlayerInfo, 0x30);
} // namespace game
using gameNearestRoadFromPlayerInfo = game::NearestRoadFromPlayerInfo;
using NearestRoadFromPlayerInfo = game::NearestRoadFromPlayerInfo;
} // namespace RED4ext

// clang-format on
