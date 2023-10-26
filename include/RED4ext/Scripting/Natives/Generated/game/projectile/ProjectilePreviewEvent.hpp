#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/SpawnerPreviewEvent.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) ProjectilePreviewEvent : game::projectile::SpawnerPreviewEvent
{
    static constexpr const char* NAME = "gameprojectileProjectilePreviewEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Transform visualOffset; // 50
};
RED4EXT_ASSERT_SIZE(ProjectilePreviewEvent, 0x70);
} // namespace game::projectile
using gameprojectileProjectilePreviewEvent = game::projectile::ProjectilePreviewEvent;
} // namespace RED4ext

// clang-format on
