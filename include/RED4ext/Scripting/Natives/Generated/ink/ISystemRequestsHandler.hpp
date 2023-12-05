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
    ink::DeleteRequestResult SaveDeleted; // 200
    ink::SaveTransferRequestUpdate SaveTransferUpdate; // 238
    ink::AdditionalContentPurchaseCallback AdditionalContentPurchaseResult; // 270
    ink::AdditionalContentInstallRequestedCallback AdditionalContentInstallationRequestResult; // 2A8
    ink::AdditionalContentInstalledCallback AdditionalContentInstallationResult; // 2E0
    ink::AdditionalContentStatusUpdateCallback AdditionalContentStatusUpdateResult; // 318
    ink::AdditionalContentDataReloadProgress AdditionalContentDataReloadProgressCallback; // 350
    ink::ToggleBreachingCallback ToggleBreachingCallback; // 388
    ink::UserIdResult UserIdResult; // 3C0
    ink::UserIdResult UserChanged; // 3F8
    ink::SystemServerRequesResult ServersSearchResult; // 430
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x468);
} // namespace ink
using inkISystemRequestsHandler = ink::ISystemRequestsHandler;
} // namespace RED4ext

// clang-format on
