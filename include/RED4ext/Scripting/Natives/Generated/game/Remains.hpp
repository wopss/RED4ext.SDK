#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct Remains : game::Object
{
    static constexpr const char* NAME = "gameRemains";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Remains, 0x240);
} // namespace game
using gameRemains = game::Remains;
} // namespace RED4ext

// clang-format on
