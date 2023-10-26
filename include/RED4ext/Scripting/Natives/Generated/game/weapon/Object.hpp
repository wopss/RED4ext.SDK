#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { struct EffectSet; }

namespace game::weapon
{
struct __declspec(align(0x10)) Object : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponObject";
    static constexpr const char* ALIAS = "WeaponObject";

    uint8_t unk2D0[0x300 - 0x2D0]; // 2D0
    Ref<game::EffectSet> effect; // 300
    uint8_t unk318[0x540 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(Object, 0x540);
} // namespace game::weapon
using gameweaponObject = game::weapon::Object;
using WeaponObject = game::weapon::Object;
} // namespace RED4ext

// clang-format on
