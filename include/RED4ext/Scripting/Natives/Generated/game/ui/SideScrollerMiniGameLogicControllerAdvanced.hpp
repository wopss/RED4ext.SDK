#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerCheatCode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameLogicControllerAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameLogicControllerAdvanced";
    static constexpr const char* ALIAS = "MinigameLogicControllerAdvanced";

    uint8_t unk78[0xC0 - 0x78]; // 78
    float baseSpeed; // C0
    Vector2 playerColliderPositionOffset; // C4
    Vector2 playerColliderSizeOffset; // CC
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    ink::CompoundWidgetReference gameplayRoot; // D8
    CName playerLibraryName; // F0
    DynArray<ink::WidgetReference> layers; // F8
    DynArray<game::ui::SideScrollerCheatCode> cheatCodes; // 108
    uint8_t unk118[0x130 - 0x118]; // 118
    DynArray<CName> acceptableCheatKeys; // 130
    uint8_t unk140[0x148 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameLogicControllerAdvanced, 0x148);
} // namespace game::ui
using gameuiSideScrollerMiniGameLogicControllerAdvanced = game::ui::SideScrollerMiniGameLogicControllerAdvanced;
using MinigameLogicControllerAdvanced = game::ui::SideScrollerMiniGameLogicControllerAdvanced;
} // namespace RED4ext

// clang-format on
