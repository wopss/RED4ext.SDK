#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterPlatformImageDetail.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterExplodingPlatformsImageWidgetDetail
{
    static constexpr const char* NAME = "gameuiarcadeShooterExplodingPlatformsImageWidgetDetail";
    static constexpr const char* ALIAS = NAME;

    CName platformName; // 00
    DynArray<game::ui::arcade::ShooterPlatformImageDetail> platformImageDetails; // 08
};
RED4EXT_ASSERT_SIZE(ShooterExplodingPlatformsImageWidgetDetail, 0x18);
} // namespace game::ui::arcade
using gameuiarcadeShooterExplodingPlatformsImageWidgetDetail = game::ui::arcade::ShooterExplodingPlatformsImageWidgetDetail;
} // namespace RED4ext

// clang-format on
