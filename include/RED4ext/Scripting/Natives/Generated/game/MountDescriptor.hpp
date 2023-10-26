#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountDescriptorMountType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetVehicleState.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MountDescriptor
{
    static constexpr const char* NAME = "gameMountDescriptor";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID parentId; // 00
    CName slotName; // 08
    Transform initialTransform; // 10
    game::PuppetVehicleState state; // 30
    game::MountDescriptorMountType mountType; // 34
    uint8_t unk38[0x40 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(MountDescriptor, 0x40);
} // namespace game
using gameMountDescriptor = game::MountDescriptor;
} // namespace RED4ext

// clang-format on
