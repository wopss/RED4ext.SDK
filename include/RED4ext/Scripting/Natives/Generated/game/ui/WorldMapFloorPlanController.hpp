#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MinimapContainerController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WorldMapFloorPlanController : game::ui::MinimapContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapFloorPlanController";
    static constexpr const char* ALIAS = "WorldMapFloorPlanController";

    uint8_t unk5F8[0x600 - 0x5F8]; // 5F8
};
RED4EXT_ASSERT_SIZE(WorldMapFloorPlanController, 0x600);
} // namespace game::ui
using gameuiWorldMapFloorPlanController = game::ui::WorldMapFloorPlanController;
using WorldMapFloorPlanController = game::ui::WorldMapFloorPlanController;
} // namespace RED4ext

// clang-format on
