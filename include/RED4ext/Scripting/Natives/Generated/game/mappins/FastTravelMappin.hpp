#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct FastTravelMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsFastTravelMappin";
    static constexpr const char* ALIAS = "FastTravelMappin";

    uint8_t unk108[0x138 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(FastTravelMappin, 0x138);
} // namespace game::mappins
using gamemappinsFastTravelMappin = game::mappins::FastTravelMappin;
using FastTravelMappin = game::mappins::FastTravelMappin;
} // namespace RED4ext

// clang-format on
