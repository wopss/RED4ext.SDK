#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinGroupState.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseWorldMapMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiBaseWorldMapMappinController";
    static constexpr const char* ALIAS = "BaseWorldMapMappinController";

    bool selected; // 2B0
    bool inZoomLevel; // 2B1
    bool inCustomFilter; // 2B2
    bool hasCustomFilter; // 2B3
    bool isFastTravelEnabled; // 2B4
    bool isVisibleInFilterAndZoom; // 2B5
    uint8_t unk2B6[0x2D0 - 0x2B6]; // 2B6
    game::ui::MappinGroupState groupState; // 2D0
    uint8_t collectionCount; // 2D4
    uint8_t unk2D5[0x300 - 0x2D5]; // 2D5
    ink::WidgetReference groupContainerWidget; // 300
    ink::TextWidgetReference groupCountTextWidget; // 318
};
RED4EXT_ASSERT_SIZE(BaseWorldMapMappinController, 0x330);
} // namespace game::ui
using BaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
} // namespace RED4ext
