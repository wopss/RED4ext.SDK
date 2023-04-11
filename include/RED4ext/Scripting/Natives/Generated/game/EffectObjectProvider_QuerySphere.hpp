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
struct EffectObjectProvider_QuerySphere : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QuerySphere";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    physics::QueryPreset queryPreset; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
    bool gatherOnlyPuppets; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QuerySphere, 0x70);
} // namespace game
using gameEffectObjectProvider_QuerySphere = game::EffectObjectProvider_QuerySphere;
} // namespace RED4ext

// clang-format on
