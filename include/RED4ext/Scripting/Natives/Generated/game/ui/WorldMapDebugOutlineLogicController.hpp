#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WorldMapDebugOutlineLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiWorldMapDebugOutlineLogicController";
    static constexpr const char* ALIAS = "WorldMapDebugOutlineLogicController";

    ink::ShapeWidgetReference outlineWidget; // 78
};
RED4EXT_ASSERT_SIZE(WorldMapDebugOutlineLogicController, 0x90);
} // namespace game::ui
using gameuiWorldMapDebugOutlineLogicController = game::ui::WorldMapDebugOutlineLogicController;
using WorldMapDebugOutlineLogicController = game::ui::WorldMapDebugOutlineLogicController;
} // namespace RED4ext

// clang-format on
