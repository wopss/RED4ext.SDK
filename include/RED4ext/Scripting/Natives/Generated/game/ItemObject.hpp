#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UpdateBucketEnum.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game { 
struct ItemObject : game::TimeDilatable
{
    static constexpr const char* NAME = "gameItemObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C8[0x320 - 0x2C8]; // 2C8
    UpdateBucketEnum updateBucket; // 320
    uint8_t unk321[0x328 - 0x321]; // 321
};
RED4EXT_ASSERT_SIZE(ItemObject, 0x328);
} // namespace game
} // namespace RED4ext
