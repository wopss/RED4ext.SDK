#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TargetSearchQuery.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectObjectProvider_TargetingObjectsInCone : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_TargetingObjectsInCone";
    static constexpr const char* ALIAS = NAME;

    game::TargetSearchQuery searchQuery; // 40
    uint32_t maxTargets; // 78
    bool usePlayerPosAndForward; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    Handle<physics::FilterData> filterData; // 80
    physics::QueryPreset queryPreset; // 90
    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_TargetingObjectsInCone, 0xA8);
} // namespace game
using gameEffectObjectProvider_TargetingObjectsInCone = game::EffectObjectProvider_TargetingObjectsInCone;
} // namespace RED4ext

// clang-format on
