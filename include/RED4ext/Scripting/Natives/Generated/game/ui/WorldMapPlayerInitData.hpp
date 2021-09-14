#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinControllerCustomData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapPlayerInitData : game::ui::MappinControllerCustomData
{
    static constexpr const char* NAME = "gameuiWorldMapPlayerInitData";
    static constexpr const char* ALIAS = "WorldMapPlayerInitData";

};
RED4EXT_ASSERT_SIZE(WorldMapPlayerInitData, 0x40);
} // namespace game::ui
using WorldMapPlayerInitData = game::ui::WorldMapPlayerInitData;
} // namespace RED4ext
