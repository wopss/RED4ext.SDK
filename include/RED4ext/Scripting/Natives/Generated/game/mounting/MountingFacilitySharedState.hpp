#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingSlotId.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::mounting
{
struct MountingFacilitySharedState : ISerializable
{
    static constexpr const char* NAME = "gamemountingMountingFacilitySharedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<WeakHandle<ent::Entity>> children; // 38
    DynArray<WeakHandle<ent::Entity>> parents; // 48
    DynArray<game::mounting::MountingSlotId> slotIds; // 58
    DynArray<game::MountingObjectType> parentTypes; // 68
    DynArray<game::MountingObjectType> childTypes; // 78
};
RED4EXT_ASSERT_SIZE(MountingFacilitySharedState, 0x88);
} // namespace game::mounting
using gamemountingMountingFacilitySharedState = game::mounting::MountingFacilitySharedState;
} // namespace RED4ext

// clang-format on
