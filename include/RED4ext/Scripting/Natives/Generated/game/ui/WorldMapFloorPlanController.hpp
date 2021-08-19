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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk478[0x480 - 0x478]; // 478
};
RED4EXT_ASSERT_SIZE(WorldMapFloorPlanController, 0x480);
} // namespace game::ui
} // namespace RED4ext
