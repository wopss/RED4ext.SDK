#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct ProjectileCollision_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataProjectileCollision_Record";
    static constexpr const char* ALIAS = "ProjectileCollision_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ProjectileCollision_Record, 0x70);
} // namespace game::data
using gamedataProjectileCollision_Record = game::data::ProjectileCollision_Record;
using ProjectileCollision_Record = game::data::ProjectileCollision_Record;
} // namespace RED4ext

// clang-format on
