#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TargetSearchQuery.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_TargetingObjectsInCone : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_TargetingObjectsInCone";
    static constexpr const char* ALIAS = NAME;

    game::TargetSearchQuery searchQuery; // 40
    EulerAngles searchAngles; // 78
    uint32_t maxTargets; // 84
    bool usePlayerPosAndForward; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
    Handle<physics::FilterData> filterData; // 90
    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_TargetingObjectsInCone, 0xB0);
} // namespace game
} // namespace RED4ext
