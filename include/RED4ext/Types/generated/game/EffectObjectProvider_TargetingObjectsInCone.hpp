#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/EulerAngles.hpp>
#include <RED4ext/Types/generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Types/generated/game/TargetSearchQuery.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_TargetingObjectsInCone : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_TargetingObjectsInCone";
    static constexpr const char* ALIAS = NAME;

    game::TargetSearchQuery searchQuery; // 40
    EulerAngles searchAngles; // 70
    uint32_t maxTargets; // 7C
    Handle<physics::FilterData> filterData; // 80
    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_TargetingObjectsInCone, 0xA0);
} // namespace game
} // namespace RED4ext
