#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinGroupState.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) BaseWorldMapMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiBaseWorldMapMappinController";
    static constexpr const char* ALIAS = "BaseWorldMapMappinController";

    bool selected; // 2C0
    bool inZoomLevel; // 2C1
    bool inCustomFilter; // 2C2
    bool hasCustomFilter; // 2C3
    bool isFastTravelEnabled; // 2C4
    bool isVisibleInFilterAndZoom; // 2C5
    uint8_t unk2C6[0x2E0 - 0x2C6]; // 2C6
    game::ui::MappinGroupState groupState; // 2E0
    uint8_t collectionCount; // 2E4
    uint8_t unk2E5[0x310 - 0x2E5]; // 2E5
    ink::WidgetReference groupContainerWidget; // 310
    ink::TextWidgetReference groupCountTextWidget; // 328
};
RED4EXT_ASSERT_SIZE(BaseWorldMapMappinController, 0x340);
} // namespace game::ui
using gameuiBaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
using BaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
} // namespace RED4ext

// clang-format on
