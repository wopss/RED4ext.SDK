#pragma once

// clang-format off

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
namespace game::ui
{
struct SideScrollerMiniGameLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameLogicController";
    static constexpr const char* ALIAS = "MinigameLogicController";

    uint32_t startHealth; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    ink::CompoundWidgetReference gameplayRoot; // 80
    uint8_t unk98[0xF0 - 0x98]; // 98
    float baseSpeed; // F0
    Vector2 playerColliderPositionOffset; // F4
    Vector2 playerColliderSizeOffset; // FC
    uint8_t unk104[0x108 - 0x104]; // 104
    CName gameName; // 108
    CName playerLibraryName; // 110
    DynArray<CName> spawnedListLibraryNames; // 118
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameLogicController, 0x128);
} // namespace game::ui
using gameuiSideScrollerMiniGameLogicController = game::ui::SideScrollerMiniGameLogicController;
using MinigameLogicController = game::ui::SideScrollerMiniGameLogicController;
} // namespace RED4ext

// clang-format on
