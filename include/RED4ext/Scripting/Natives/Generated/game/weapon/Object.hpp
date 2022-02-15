#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { struct EffectSet; }

namespace game::weapon { 
struct Object : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponObject";
    static constexpr const char* ALIAS = "WeaponObject";

    uint8_t unk2C0[0x2F0 - 0x2C0]; // 2C0
    Ref<game::EffectSet> effect; // 2F0
    uint8_t unk308[0x4F0 - 0x308]; // 308
};
RED4EXT_ASSERT_SIZE(Object, 0x4F0);
} // namespace game::weapon
using WeaponObject = game::weapon::Object;
} // namespace RED4ext
