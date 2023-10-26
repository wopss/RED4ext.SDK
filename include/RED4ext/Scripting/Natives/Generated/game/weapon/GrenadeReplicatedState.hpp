#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::weapon
{
struct __declspec(align(0x10)) GrenadeReplicatedState : net::IEntityState
{
    static constexpr const char* NAME = "gameweaponGrenadeReplicatedState";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> instigator; // 50
    ItemID itemID; // 60
    WorldTransform currentTransform; // 70
    bool exploded; // 90
    bool launched; // 91
    uint8_t unk92[0xA0 - 0x92]; // 92
};
RED4EXT_ASSERT_SIZE(GrenadeReplicatedState, 0xA0);
} // namespace game::weapon
using gameweaponGrenadeReplicatedState = game::weapon::GrenadeReplicatedState;
} // namespace RED4ext

// clang-format on
