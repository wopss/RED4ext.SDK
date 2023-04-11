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
struct ArcadeBackgroundController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeBackgroundController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::WidgetReference> backgroundLayerList; // 78
};
RED4EXT_ASSERT_SIZE(ArcadeBackgroundController, 0x88);
} // namespace game::ui::arcade
using gameuiarcadeArcadeBackgroundController = game::ui::arcade::ArcadeBackgroundController;
} // namespace RED4ext

// clang-format on
