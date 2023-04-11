#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectObjectProvider_QuerySphere_Value : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QuerySphere_Value";
    static constexpr const char* ALIAS = NAME;

    float radius; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<physics::FilterData> filterData; // 48
    physics::QueryPreset queryPreset; // 58
    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QuerySphere_Value, 0x70);
} // namespace game
using gameEffectObjectProvider_QuerySphere_Value = game::EffectObjectProvider_QuerySphere_Value;
} // namespace RED4ext

// clang-format on
