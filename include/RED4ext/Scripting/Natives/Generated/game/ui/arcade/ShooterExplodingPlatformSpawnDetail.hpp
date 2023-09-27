#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterExplodingPlatformSpawnDetail
{
    static constexpr const char* NAME = "gameuiarcadeShooterExplodingPlatformSpawnDetail";
    static constexpr const char* ALIAS = NAME;

    CName spawnPlatformName; // 00
    DynArray<CName> explodingPlatformsNames; // 08
};
RED4EXT_ASSERT_SIZE(ShooterExplodingPlatformSpawnDetail, 0x18);
} // namespace game::ui::arcade
using gameuiarcadeShooterExplodingPlatformSpawnDetail = game::ui::arcade::ShooterExplodingPlatformSpawnDetail;
} // namespace RED4ext

// clang-format on
