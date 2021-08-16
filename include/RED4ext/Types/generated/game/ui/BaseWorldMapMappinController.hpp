#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Types/generated/game/ui/MappinGroupState.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseWorldMapMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiBaseWorldMapMappinController";
    static constexpr const char* ALIAS = "BaseWorldMapMappinController";

    bool selected; // 2A0
    bool inZoomLevel; // 2A1
    bool inCustomFilter; // 2A2
    bool hasCustomFilter; // 2A3
    bool isFastTravelEnabled; // 2A4
    bool isVisibleInFilterAndZoom; // 2A5
    uint8_t unk2A6[0x2C0 - 0x2A6]; // 2A6
    game::ui::MappinGroupState groupState; // 2C0
    uint8_t collectionCount; // 2C4
    uint8_t unk2C5[0x2E8 - 0x2C5]; // 2C5
    ink::WidgetReference groupContainerWidget; // 2E8
    ink::TextWidgetReference groupCountTextWidget; // 300
    uint8_t unk318[0x320 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(BaseWorldMapMappinController, 0x320);
} // namespace game::ui
using BaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
} // namespace RED4ext
