#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct OutOfCrowd : red::Event
{
    static constexpr const char* NAME = "gameOutOfCrowd";
    static constexpr const char* ALIAS = "OutOfCrowd";

};
RED4EXT_ASSERT_SIZE(OutOfCrowd, 0x40);
} // namespace game
using gameOutOfCrowd = game::OutOfCrowd;
using OutOfCrowd = game::OutOfCrowd;
} // namespace RED4ext

// clang-format on
