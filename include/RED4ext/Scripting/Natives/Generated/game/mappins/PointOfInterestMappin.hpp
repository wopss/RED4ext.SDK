#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct PointOfInterestMappin : game::mappins::IMappin
{
    static constexpr const char* NAME = "gamemappinsPointOfInterestMappin";
    static constexpr const char* ALIAS = "PointOfInterestMappin";

    uint8_t unk88[0x100 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(PointOfInterestMappin, 0x100);
} // namespace game::mappins
using gamemappinsPointOfInterestMappin = game::mappins::PointOfInterestMappin;
using PointOfInterestMappin = game::mappins::PointOfInterestMappin;
} // namespace RED4ext

// clang-format on
