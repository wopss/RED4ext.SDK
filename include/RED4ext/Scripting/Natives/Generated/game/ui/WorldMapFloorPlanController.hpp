#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MinimapContainerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapFloorPlanController : game::ui::MinimapContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapFloorPlanController";
    static constexpr const char* ALIAS = "WorldMapFloorPlanController";

    uint8_t unk488[0x490 - 0x488]; // 488
};
RED4EXT_ASSERT_SIZE(WorldMapFloorPlanController, 0x490);
} // namespace game::ui
using WorldMapFloorPlanController = game::ui::WorldMapFloorPlanController;
} // namespace RED4ext
