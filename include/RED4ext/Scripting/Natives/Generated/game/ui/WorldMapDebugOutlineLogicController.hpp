#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapDebugOutlineLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiWorldMapDebugOutlineLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::ShapeWidgetReference outlineWidget; // 68
};
RED4EXT_ASSERT_SIZE(WorldMapDebugOutlineLogicController, 0x80);
} // namespace game::ui
} // namespace RED4ext
