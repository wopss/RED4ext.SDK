#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WorkspotCategory.hpp>

namespace RED4ext
{
namespace game { 
struct SpotSequenceCategory
{
    static constexpr const char* NAME = "gameSpotSequenceCategory";
    static constexpr const char* ALIAS = NAME;

    game::data::WorkspotCategory type; // 00
    float probability; // 04
};
RED4EXT_ASSERT_SIZE(SpotSequenceCategory, 0x8);
} // namespace game
} // namespace RED4ext
