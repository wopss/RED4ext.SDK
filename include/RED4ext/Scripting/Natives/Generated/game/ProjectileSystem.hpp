#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IProjectileSystem.hpp>

namespace RED4ext
{
namespace game { 
struct ProjectileSystem : game::IProjectileSystem
{
    static constexpr const char* NAME = "gameProjectileSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x10290 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ProjectileSystem, 0x10290);
} // namespace game
} // namespace RED4ext
