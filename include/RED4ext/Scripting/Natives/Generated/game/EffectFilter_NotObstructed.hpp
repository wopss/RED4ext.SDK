#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectFilter_NotObstructed : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectFilter_NotObstructed";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    physics::QueryPreset queryPreset; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
    float forwardOffset; // 68
    bool playerUseCameraPositionForCheck; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(EffectFilter_NotObstructed, 0x70);
} // namespace game
using gameEffectFilter_NotObstructed = game::EffectFilter_NotObstructed;
} // namespace RED4ext

// clang-format on
