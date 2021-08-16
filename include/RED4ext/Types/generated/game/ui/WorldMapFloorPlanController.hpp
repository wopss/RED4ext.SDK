#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/MinimapContainerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapFloorPlanController : game::ui::MinimapContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapFloorPlanController";
    static constexpr const char* ALIAS = "WorldMapFloorPlanController";

    uint8_t unk438[0x440 - 0x438]; // 438
};
RED4EXT_ASSERT_SIZE(WorldMapFloorPlanController, 0x440);
} // namespace game::ui
using WorldMapFloorPlanController = game::ui::WorldMapFloorPlanController;
} // namespace RED4ext
