#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_SweepOverTime_Capsule : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepOverTime_Capsule";
    static constexpr const char* ALIAS = NAME;

    float radius; // 68
    float height; // 6C
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepOverTime_Capsule, 0x70);
} // namespace game
using gameEffectObjectProvider_SweepOverTime_Capsule = game::EffectObjectProvider_SweepOverTime_Capsule;
} // namespace RED4ext

// clang-format on
