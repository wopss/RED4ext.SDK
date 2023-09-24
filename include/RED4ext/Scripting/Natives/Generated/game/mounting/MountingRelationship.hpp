#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingObjectSubType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingRelationshipType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingSlotId.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::mounting
{
struct MountingRelationship
{
    static constexpr const char* NAME = "gamemountingMountingRelationship";
    static constexpr const char* ALIAS = "MountingRelationship";

    game::MountingObjectType otherMountableType; // 00
    game::MountingObjectSubType otherMountableSubType; // 04
    WeakHandle<game::Object> otherObject; // 08
    game::MountingRelationshipType relationshipType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    game::mounting::MountingSlotId slotId; // 20
};
RED4EXT_ASSERT_SIZE(MountingRelationship, 0x28);
} // namespace game::mounting
using gamemountingMountingRelationship = game::mounting::MountingRelationship;
using MountingRelationship = game::mounting::MountingRelationship;
} // namespace RED4ext

// clang-format on
