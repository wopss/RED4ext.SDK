#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/District.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LinePatternWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::data { struct District_Record; }

namespace game::ui
{
struct WorldMapDistrictLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiWorldMapDistrictLogicController";
    static constexpr const char* ALIAS = "WorldMapDistrictLogicController";

    WeakHandle<game::data::District_Record> record; // 78
    game::data::District type; // 88
    bool selected; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    ink::LinePatternWidgetReference outlineWidget; // 90
    ink::ImageWidgetReference iconWidget; // A8
};
RED4EXT_ASSERT_SIZE(WorldMapDistrictLogicController, 0xC0);
} // namespace game::ui
using gameuiWorldMapDistrictLogicController = game::ui::WorldMapDistrictLogicController;
using WorldMapDistrictLogicController = game::ui::WorldMapDistrictLogicController;
} // namespace RED4ext

// clang-format on
