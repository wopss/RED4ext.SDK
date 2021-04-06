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

    uint8_t unk310[0x340 - 0x310]; // 310
    Ref<game::EffectSet> effect; // 340
    uint8_t unk358[0x4F0 - 0x358]; // 358
};
RED4EXT_ASSERT_SIZE(Object, 0x4F0);
} // namespace game::weapon
using WeaponObject = game::weapon::Object;
} // namespace RED4ext
