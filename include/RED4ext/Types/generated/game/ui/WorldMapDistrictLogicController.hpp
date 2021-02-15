#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/data/District.hpp>
#include <RED4ext/Types/generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/LinePatternWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::data { struct District_Record; }

namespace game::ui { 
struct WorldMapDistrictLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiWorldMapDistrictLogicController";
    static constexpr const char* ALIAS = "WorldMapDistrictLogicController";

    WeakHandle<game::data::District_Record> record; // 68
    game::data::District type; // 78
    bool selected; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    ink::LinePatternWidgetReference outlineWidget; // 80
    ink::ImageWidgetReference iconWidget; // 98
};
RED4EXT_ASSERT_SIZE(WorldMapDistrictLogicController, 0xB0);
} // namespace game::ui
using WorldMapDistrictLogicController = game::ui::WorldMapDistrictLogicController;
} // namespace RED4ext
