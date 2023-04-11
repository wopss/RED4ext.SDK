#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingSlotId.hpp>

namespace RED4ext
{
namespace game::mounting
{
struct MountingInfo
{
    static constexpr const char* NAME = "gamemountingMountingInfo";
    static constexpr const char* ALIAS = "MountingInfo";

    ent::EntityID childId; // 00
    ent::EntityID parentId; // 08
    game::mounting::MountingSlotId slotId; // 10
};
RED4EXT_ASSERT_SIZE(MountingInfo, 0x18);
} // namespace game::mounting
using gamemountingMountingInfo = game::mounting::MountingInfo;
using MountingInfo = game::mounting::MountingInfo;
} // namespace RED4ext

// clang-format on
