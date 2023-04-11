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
struct TimeDilatable : game::Object
{
    static constexpr const char* NAME = "gameTimeDilatable";
    static constexpr const char* ALIAS = "TimeDilatable";

    uint8_t unk240[0x260 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(TimeDilatable, 0x260);
} // namespace game
using gameTimeDilatable = game::TimeDilatable;
using TimeDilatable = game::TimeDilatable;
} // namespace RED4ext

// clang-format on
