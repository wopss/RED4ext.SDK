#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/AllLanguagesCheckboxCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/FilterTagsReceivedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuIntCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuIntIntCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ReceivedHiddenModsListCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RequestMediaForWidgetCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SendModGridInfoCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SendModUpdateVerificationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SendProcessedModProgressInfoCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SendSelectedModInfoCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/UpdatePageLayoutCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BoolCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ModioBrowserMenuGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiModioBrowserMenuGameController";
    static constexpr const char* ALIAS = "ModioBrowserMenuGameController";

    uint8_t unk100[0x108 - 0x100]; // 100
    game::ui::SendSelectedModInfoCallback NewModSelected; // 108
    game::ui::SendProcessedModProgressInfoCallback ProcessedModProgressUpdate; // 140
    game::ui::SendModGridInfoCallback ListOfModsToDisplayUpdated; // 178
    game::ui::UpdatePageLayoutCallback PagesLayoutChanged; // 1B0
    ink::BoolCallback SwitchBetweenBrowserAndCollectionMenu; // 1E8
    game::ui::MenuIntIntCallback MenuUpdate; // 220
    ink::BoolCallback CheckIfEnabledModsListChanged; // 258
    game::ui::MenuIntCallback ModDetailsUpdate; // 290
    ink::EmptyCallback SearchbarUpdate; // 2C8
    ink::EmptyCallback ButtonHintsUpdateRequested; // 300
    game::ui::RequestMediaForWidgetCallback RequestLogoForWidget; // 338
    game::ui::MenuIntCallback RequestedGalleryOnServer; // 370
    game::ui::RequestMediaForWidgetCallback RequestGalleryForWidget; // 3A8
    game::ui::MenuIntCallback LogoDownloadRequested; // 3E0
    game::ui::AllLanguagesCheckboxCallback AllLanguagesCheckboxClicked; // 418
    ink::EmptyCallback RateLimitedErrorReceived; // 450
    ink::EmptyCallback RateLimitedErrorLifted; // 488
    game::ui::SendModUpdateVerificationInfo UpdateModVerificationPopupCount; // 4C0
    game::ui::FilterTagsReceivedCallback ModTagsReceived; // 4F8
    ink::EmptyCallback DelayedSpawnForFilters; // 530
    ink::EmptyCallback DelayedSliderAdjustForDrawer; // 568
    game::ui::ReceivedHiddenModsListCallback HiddenModListUpdated; // 5A0
    ink::EmptyCallback AskedForNewModList; // 5D8
    bool bIsInBrowserMode; // 610
    bool bIsUserSubscribedToCurrentlySelectedMod; // 611
    bool bHasAtLeastOneModEnabled; // 612
    bool bHasAtLeastOneModDisabled; // 613
    bool bIsPregame; // 614
    uint8_t unk615[0xDA8 - 0x615]; // 615
};
RED4EXT_ASSERT_SIZE(ModioBrowserMenuGameController, 0xDA8);
} // namespace game::ui
using gameuiModioBrowserMenuGameController = game::ui::ModioBrowserMenuGameController;
using ModioBrowserMenuGameController = game::ui::ModioBrowserMenuGameController;
} // namespace RED4ext

// clang-format on
