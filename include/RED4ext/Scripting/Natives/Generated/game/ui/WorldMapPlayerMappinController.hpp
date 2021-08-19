#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseWorldMapMappinController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapPlayerMappinController : game::ui::BaseWorldMapMappinController
{
    static constexpr const char* NAME = "gameuiWorldMapPlayerMappinController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk320[0x360 - 0x320]; // 320
};
RED4EXT_ASSERT_SIZE(WorldMapPlayerMappinController, 0x360);
} // namespace game::ui
} // namespace RED4ext
