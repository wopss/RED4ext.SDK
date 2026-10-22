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
#include <RED4ext/Scripting/Natives/Generated/ink/GogSignInCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/OnGogLoginStatusChangedResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveMetadataRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveTransferRequestUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemServerRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TelemetryDataRemovalCallback.hpp>
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
    ink::TelemetryDataRemovalCallback TelemetryDataRemovalCallback; // 318
    ink::AdditionalContentPurchaseCallback AdditionalContentPurchaseResult; // 350
    ink::AdditionalContentInstallRequestedCallback AdditionalContentInstallationRequestResult; // 388
    ink::AdditionalContentInstalledCallback AdditionalContentInstallationResult; // 3C0
    ink::AdditionalContentStatusUpdateCallback AdditionalContentStatusUpdateResult; // 3F8
    ink::AdditionalContentDataReloadProgress AdditionalContentDataReloadProgressCallback; // 430
    ink::ToggleBreachingCallback ToggleBreachingCallback; // 468
    ink::GogSignInCallback GogSignInCallback; // 4A0
    ink::UserIdResult UserIdResult; // 4D8
    ink::UserIdResult UserChanged; // 510
    ink::SystemServerRequesResult ServersSearchResult; // 548
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x580);
} // namespace ink
using inkISystemRequestsHandler = ink::ISystemRequestsHandler;
} // namespace RED4ext

// clang-format on
