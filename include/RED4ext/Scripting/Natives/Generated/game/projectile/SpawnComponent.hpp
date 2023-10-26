#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) SpawnComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameprojectileSpawnComponent";
    static constexpr const char* ALIAS = "ProjectileSpawnComponent";

    uint8_t unk120[0x130 - 0x120]; // 120
    DynArray<CName> projectileTemplates; // 130
    uint8_t unk140[0x150 - 0x140]; // 140
    Vector3 spawnOffset; // 150
    uint8_t unk15C[0x160 - 0x15C]; // 15C
    CName slotName; // 160
    uint8_t unk168[0x300 - 0x168]; // 168
};
RED4EXT_ASSERT_SIZE(SpawnComponent, 0x300);
} // namespace game::projectile
using gameprojectileSpawnComponent = game::projectile::SpawnComponent;
using ProjectileSpawnComponent = game::projectile::SpawnComponent;
} // namespace RED4ext

// clang-format on
