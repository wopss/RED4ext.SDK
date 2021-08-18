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
    static constexpr const char* ALIAS = "ItemObject";

    uint8_t unk2B8[0x310 - 0x2B8]; // 2B8
    UpdateBucketEnum updateBucket; // 310
    uint8_t unk311[0x318 - 0x311]; // 311
};
RED4EXT_ASSERT_SIZE(ItemObject, 0x318);
} // namespace game
using ItemObject = game::ItemObject;
} // namespace RED4ext
