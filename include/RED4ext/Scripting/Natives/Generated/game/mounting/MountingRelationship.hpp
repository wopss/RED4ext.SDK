#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingRelationshipType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingSlotId.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::mounting { 
struct MountingRelationship
{
    static constexpr const char* NAME = "gamemountingMountingRelationship";
    static constexpr const char* ALIAS = "MountingRelationship";

    game::MountingObjectType otherMountableType; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    WeakHandle<game::Object> otherObject; // 08
    game::MountingRelationshipType relationshipType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    game::mounting::MountingSlotId slotId; // 20
};
RED4EXT_ASSERT_SIZE(MountingRelationship, 0x28);
} // namespace game::mounting
using MountingRelationship = game::mounting::MountingRelationship;
} // namespace RED4ext
