#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/SceneTierData.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTierDataMotionConstrained : game::SceneTierData
{
    static constexpr const char* NAME = "gameSceneTierDataMotionConstrained";
    static constexpr const char* ALIAS = "SceneTierDataMotionConstrained";

    NodeRef splineRef; // 48
    float adjustingSpeed; // 50
    float adjustingDuration; // 54
    float travellingSpeed; // 58
    float travellingDuration; // 5C
    int32_t notificationBackwardIndex; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(SceneTierDataMotionConstrained, 0x68);
} // namespace game
using SceneTierDataMotionConstrained = game::SceneTierDataMotionConstrained;
} // namespace RED4ext
