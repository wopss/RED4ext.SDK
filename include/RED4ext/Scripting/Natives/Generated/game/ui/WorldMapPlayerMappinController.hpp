#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseWorldMapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapPlayerMappinController : game::ui::BaseWorldMapMappinController
{
    static constexpr const char* NAME = "gameuiWorldMapPlayerMappinController";
    static constexpr const char* ALIAS = "WorldMapPlayerMappinController";

    uint8_t unk330[0x370 - 0x330]; // 330
    ink::ImageWidgetReference coneIconWidget; // 370
    uint8_t unk388[0x390 - 0x388]; // 388
};
RED4EXT_ASSERT_SIZE(WorldMapPlayerMappinController, 0x390);
} // namespace game::ui
using WorldMapPlayerMappinController = game::ui::WorldMapPlayerMappinController;
} // namespace RED4ext
