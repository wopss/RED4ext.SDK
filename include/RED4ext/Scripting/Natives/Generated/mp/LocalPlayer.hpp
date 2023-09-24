#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/Player.hpp>

namespace RED4ext
{
namespace mp
{
struct LocalPlayer : mp::Player
{
    static constexpr const char* NAME = "mpLocalPlayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocalPlayer, 0x88);
} // namespace mp
using mpLocalPlayer = mp::LocalPlayer;
} // namespace RED4ext

// clang-format on
