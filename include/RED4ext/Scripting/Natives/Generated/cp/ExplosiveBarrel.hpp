#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DestructibleObject.hpp>

namespace RED4ext
{
namespace cp
{
struct ExplosiveBarrel : game::DestructibleObject
{
    static constexpr const char* NAME = "cpExplosiveBarrel";
    static constexpr const char* ALIAS = NAME;

    CName colliderComponentName; // 248
    CName destructionComponentName; // 250
    uint8_t unk258[0x270 - 0x258]; // 258
};
RED4EXT_ASSERT_SIZE(ExplosiveBarrel, 0x270);
} // namespace cp
using cpExplosiveBarrel = cp::ExplosiveBarrel;
} // namespace RED4ext

// clang-format on
