#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct HudActor : IScriptable
{
    static constexpr const char* NAME = "gameHudActor";
    static constexpr const char* ALIAS = "HUDActor";

};
RED4EXT_ASSERT_SIZE(HudActor, 0x40);
} // namespace game
using gameHudActor = game::HudActor;
using HUDActor = game::HudActor;
} // namespace RED4ext

// clang-format on
