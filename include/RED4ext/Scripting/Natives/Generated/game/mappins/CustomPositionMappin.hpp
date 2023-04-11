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
struct CustomPositionMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsCustomPositionMappin";
    static constexpr const char* ALIAS = "CustomPositionMappin";

};
RED4EXT_ASSERT_SIZE(CustomPositionMappin, 0x108);
} // namespace game::mappins
using gamemappinsCustomPositionMappin = game::mappins::CustomPositionMappin;
using CustomPositionMappin = game::mappins::CustomPositionMappin;
} // namespace RED4ext

// clang-format on
