#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterLayerInfo
{
    static constexpr const char* NAME = "gameuiarcadeShooterLayerInfo";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference referenceWidget; // 00
    Vector2 planeRelativeValue; // 18
    CName layerName; // 20
};
RED4EXT_ASSERT_SIZE(ShooterLayerInfo, 0x28);
} // namespace game::ui::arcade
using gameuiarcadeShooterLayerInfo = game::ui::arcade::ShooterLayerInfo;
} // namespace RED4ext

// clang-format on
