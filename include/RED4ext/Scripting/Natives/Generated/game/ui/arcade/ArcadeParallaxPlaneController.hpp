#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeParallaxPlaneController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeParallaxPlaneController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::WidgetReference> segmentList; // 78
    uint8_t unk88[0xB8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ArcadeParallaxPlaneController, 0xB8);
} // namespace game::ui::arcade
using gameuiarcadeArcadeParallaxPlaneController = game::ui::arcade::ArcadeParallaxPlaneController;
} // namespace RED4ext

// clang-format on
