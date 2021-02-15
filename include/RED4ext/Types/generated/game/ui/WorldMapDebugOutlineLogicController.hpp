#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ShapeWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapDebugOutlineLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiWorldMapDebugOutlineLogicController";
    static constexpr const char* ALIAS = "WorldMapDebugOutlineLogicController";

    ink::ShapeWidgetReference outlineWidget; // 68
};
RED4EXT_ASSERT_SIZE(WorldMapDebugOutlineLogicController, 0x80);
} // namespace game::ui
using WorldMapDebugOutlineLogicController = game::ui::WorldMapDebugOutlineLogicController;
} // namespace RED4ext
