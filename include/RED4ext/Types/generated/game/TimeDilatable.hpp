#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct TimeDilatable : game::Object
{
    static constexpr const char* NAME = "gameTimeDilatable";
    static constexpr const char* ALIAS = "TimeDilatable";

    uint8_t unk230[0x2B8 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(TimeDilatable, 0x2B8);
} // namespace game
using TimeDilatable = game::TimeDilatable;
} // namespace RED4ext
