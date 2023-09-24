#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeSpawnerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xC0 - 0x78]; // 78
    CName objectLibraryID; // C0
    uint32_t initialObjectsCount; // C8
    uint8_t unkCC[0xD0 - 0xCC]; // CC
};
RED4EXT_ASSERT_SIZE(ArcadeSpawnerController, 0xD0);
} // namespace game::ui::arcade
using gameuiarcadeArcadeSpawnerController = game::ui::arcade::ArcadeSpawnerController;
} // namespace RED4ext

// clang-format on
