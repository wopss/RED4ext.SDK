#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectProvider_SweepOverTime_Capsule : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepOverTime_Capsule";
    static constexpr const char* ALIAS = NAME;

    float radius; // 60
    float height; // 64
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepOverTime_Capsule, 0x68);
} // namespace game
} // namespace RED4ext
