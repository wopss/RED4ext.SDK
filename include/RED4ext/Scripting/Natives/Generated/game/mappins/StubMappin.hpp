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
struct StubMappin : game::mappins::IMappin
{
    static constexpr const char* NAME = "gamemappinsStubMappin";
    static constexpr const char* ALIAS = "StubMappin";

    uint8_t unk88[0xA8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(StubMappin, 0xA8);
} // namespace game::mappins
using gamemappinsStubMappin = game::mappins::StubMappin;
using StubMappin = game::mappins::StubMappin;
} // namespace RED4ext

// clang-format on
