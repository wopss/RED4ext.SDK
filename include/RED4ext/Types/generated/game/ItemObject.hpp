#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/UpdateBucketEnum.hpp>
#include <RED4ext/Types/generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game { 
struct ItemObject : game::TimeDilatable
{
    static constexpr const char* NAME = "gameItemObject";
    static constexpr const char* ALIAS = "ItemObject";

    uint8_t unk2B0[0x308 - 0x2B0]; // 2B0
    UpdateBucketEnum updateBucket; // 308
    uint8_t unk309[0x310 - 0x309]; // 309
};
RED4EXT_ASSERT_SIZE(ItemObject, 0x310);
} // namespace game
using ItemObject = game::ItemObject;
} // namespace RED4ext
