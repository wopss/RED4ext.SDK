#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AdditionalContentDataReloadProgress.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AdditionalContentInstallRequestedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AdditionalContentInstalledCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AdditionalContentPurchaseCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AdditionalContentStatusUpdateCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CloudSaveUploadFinish.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CloudSavesQueryStatusChange.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DeleteRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DeleteScreenshotResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FavoriteLoadResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GameScreenshotsRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MarketingConsentPopupTypeResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/OnGogLoginStatusChangedResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveMetadataRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveTransferRequestUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemServerRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ToggleBreachingCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TrialOnBuyFullGame.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TrialVersionRemainingTimeUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserIdResult.hpp>

namespace RED4ext
{
namespace ink
{
struct ISystemRequestsHandler : IScriptable
{
    static constexpr const char* NAME = "inkISystemRequestsHandler";
    static constexpr const char* ALIAS = NAME;

    ink::SystemRequesResult SavesForSaveReady; // 40
    ink::SystemRequesResult SavesForLoadReady; // 78
    ink::SaveMetadataRequestResult SaveMetadataReady; // B0
    ink::OnGogLoginStatusChangedResult GogLoginStatusChanged; // E8
    ink::TrialVersionRemainingTimeUpdate TrialVersionRemainingTimeUpdated; // 120
    ink::TrialOnBuyFullGame BoughtFullGame; // 158
    ink::CloudSavesQueryStatusChange CloudSavesQueryStatusChanged; // 190
    ink::CloudSaveUploadFinish CloudSaveUploadFinish; // 1C8
    ink::GameScreenshotsRequestResult ScreenshotsForLoadReady; // 200
    ink::FavoriteLoadResult FavoritesLoadedReady; // 238
    ink::DeleteScreenshotResult DeleteSreenshotComplete; // 270
    ink::DeleteRequestResult SaveDeleted; // 2A8
    ink::SaveTransferRequestUpdate SaveTransferUpdate; // 2E0
    ink::AdditionalContentPurchaseCallback AdditionalContentPurchaseResult; // 318
    ink::AdditionalContentInstallRequestedCallback AdditionalContentInstallationRequestResult; // 350
    ink::AdditionalContentInstalledCallback AdditionalContentInstallationResult; // 388
    ink::AdditionalContentStatusUpdateCallback AdditionalContentStatusUpdateResult; // 3C0
    ink::AdditionalContentDataReloadProgress AdditionalContentDataReloadProgressCallback; // 3F8
    ink::ToggleBreachingCallback ToggleBreachingCallback; // 430
    ink::UserIdResult UserIdResult; // 468
    ink::UserIdResult UserChanged; // 4A0
    ink::SystemServerRequesResult ServersSearchResult; // 4D8
    ink::MarketingConsentPopupTypeResult MarketingConsentPopupTypeResult; // 510
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x548);
} // namespace ink
using inkISystemRequestsHandler = ink::ISystemRequestsHandler;
} // namespace RED4ext

// clang-format on
