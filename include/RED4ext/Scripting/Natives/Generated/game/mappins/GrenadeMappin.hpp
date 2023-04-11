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
struct GrenadeMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsGrenadeMappin";
    static constexpr const char* ALIAS = "GrenadeMappin";

};
RED4EXT_ASSERT_SIZE(GrenadeMappin, 0x108);
} // namespace game::mappins
using gamemappinsGrenadeMappin = game::mappins::GrenadeMappin;
using GrenadeMappin = game::mappins::GrenadeMappin;
} // namespace RED4ext

// clang-format on
