#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappin.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct PointOfInterestMappin : game::mappins::IMappin
{
    static constexpr const char* NAME = "gamemappinsPointOfInterestMappin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0xF0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(PointOfInterestMappin, 0xF0);
} // namespace game::mappins
} // namespace RED4ext
