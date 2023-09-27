#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RootHudGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiRootHudGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x278 - 0xE0]; // E0
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 278
    uint8_t unk288[0x2E0 - 0x288]; // 288
};
RED4EXT_ASSERT_SIZE(RootHudGameController, 0x2E0);
} // namespace game::ui
using gameuiRootHudGameController = game::ui::RootHudGameController;
} // namespace RED4ext

// clang-format on
