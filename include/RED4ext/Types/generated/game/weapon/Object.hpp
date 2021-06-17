#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { struct EffectSet; }

namespace game::weapon { 
struct Object : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponObject";
    static constexpr const char* ALIAS = "WeaponObject";

    uint8_t unk318[0x348 - 0x318]; // 318
    Ref<game::EffectSet> effect; // 348
    uint8_t unk360[0x500 - 0x360]; // 360
};
RED4EXT_ASSERT_SIZE(Object, 0x500);
} // namespace game::weapon
using WeaponObject = game::weapon::Object;
} // namespace RED4ext
