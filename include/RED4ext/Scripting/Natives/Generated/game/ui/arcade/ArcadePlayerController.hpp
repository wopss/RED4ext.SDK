#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeColliderData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadePlayerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadePlayerController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::arcade::ArcadeColliderData> colliderList; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ArcadePlayerController, 0x90);
} // namespace game::ui::arcade
using gameuiarcadeArcadePlayerController = game::ui::arcade::ArcadePlayerController;
} // namespace RED4ext

// clang-format on
