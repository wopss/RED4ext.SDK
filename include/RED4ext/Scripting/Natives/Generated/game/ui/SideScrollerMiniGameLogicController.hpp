#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameLogicController";
    static constexpr const char* ALIAS = NAME;

    uint32_t startHealth; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    ink::CompoundWidgetReference gameplayRoot; // 70
    uint8_t unk88[0xE0 - 0x88]; // 88
    float baseSpeed; // E0
    Vector2 playerColliderPositionOffset; // E4
    Vector2 playerColliderSizeOffset; // EC
    uint8_t unkF4[0xF8 - 0xF4]; // F4
    CName gameName; // F8
    CName playerLibraryName; // 100
    DynArray<CName> spawnedListLibraryNames; // 108
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameLogicController, 0x118);
} // namespace game::ui
} // namespace RED4ext
