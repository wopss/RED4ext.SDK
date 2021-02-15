#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_QuerySphere : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QuerySphere";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    bool gatherOnlyPuppets; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QuerySphere, 0x68);
} // namespace game
} // namespace RED4ext
