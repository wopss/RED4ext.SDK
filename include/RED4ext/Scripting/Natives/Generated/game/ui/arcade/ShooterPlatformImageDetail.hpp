#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterPlatformImageDetail
{
    static constexpr const char* NAME = "gameuiarcadeShooterPlatformImageDetail";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference platformImage; // 00
};
RED4EXT_ASSERT_SIZE(ShooterPlatformImageDetail, 0x18);
} // namespace game::ui::arcade
using gameuiarcadeShooterPlatformImageDetail = game::ui::arcade::ShooterPlatformImageDetail;
} // namespace RED4ext

// clang-format on
