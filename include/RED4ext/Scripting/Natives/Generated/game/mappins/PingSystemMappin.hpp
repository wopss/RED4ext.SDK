#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct PingSystemMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsPingSystemMappin";
    static constexpr const char* ALIAS = "PingSystemMappin";

    uint8_t unk108[0x118 - 0x108]; // 108
    game::data::PingType pingType; // 118
    uint8_t unk11C[0x120 - 0x11C]; // 11C
};
RED4EXT_ASSERT_SIZE(PingSystemMappin, 0x120);
} // namespace game::mappins
using gamemappinsPingSystemMappin = game::mappins::PingSystemMappin;
using PingSystemMappin = game::mappins::PingSystemMappin;
} // namespace RED4ext

// clang-format on
