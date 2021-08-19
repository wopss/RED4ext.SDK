#pragma once

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
namespace game::ui { 
struct SideScrollerMiniGameLogicControllerAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameLogicControllerAdvanced";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0xB0 - 0x68]; // 68
    float baseSpeed; // B0
    Vector2 playerColliderPositionOffset; // B4
    Vector2 playerColliderSizeOffset; // BC
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    ink::CompoundWidgetReference gameplayRoot; // C8
    CName playerLibraryName; // E0
    DynArray<ink::WidgetReference> layers; // E8
    DynArray<game::ui::SideScrollerCheatCode> cheatCodes; // F8
    uint8_t unk108[0x120 - 0x108]; // 108
    DynArray<CName> acceptableCheatKeys; // 120
    uint8_t unk130[0x138 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameLogicControllerAdvanced, 0x138);
} // namespace game::ui
} // namespace RED4ext
