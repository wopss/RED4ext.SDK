#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeColliderData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeObjectController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeObjectController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::arcade::ArcadeColliderData> colliderList; // 78
    ink::WidgetReference image; // 88
    uint8_t unkA0[0x100 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(ArcadeObjectController, 0x100);
} // namespace game::ui::arcade
using gameuiarcadeArcadeObjectController = game::ui::arcade::ArcadeObjectController;
} // namespace RED4ext

// clang-format on
