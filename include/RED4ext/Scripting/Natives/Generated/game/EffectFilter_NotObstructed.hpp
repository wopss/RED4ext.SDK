#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectFilter_NotObstructed : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectFilter_NotObstructed";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    float forwardOffset; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(EffectFilter_NotObstructed, 0x68);
} // namespace game
} // namespace RED4ext
