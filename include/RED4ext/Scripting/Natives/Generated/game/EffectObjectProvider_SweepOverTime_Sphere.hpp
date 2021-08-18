#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectProvider_SweepOverTime_Sphere : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepOverTime_Sphere";
    static constexpr const char* ALIAS = NAME;

    float radius; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepOverTime_Sphere, 0x68);
} // namespace game
} // namespace RED4ext
