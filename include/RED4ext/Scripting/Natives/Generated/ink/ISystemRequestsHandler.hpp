#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CloudSaveUploadFinish.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CloudSavesQueryStatusChange.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DeleteRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/OnGogLoginStatusChangedResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveMetadataRequestResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveTransferRequestUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemServerRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TrialOnBuyFullGame.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TrialVersionRemainingTimeUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserIdResult.hpp>

namespace RED4ext
{
namespace ink { 
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
    ink::UserIdResult UserIdResult; // 270
    ink::UserIdResult UserChanged; // 2A8
    ink::SystemServerRequesResult ServersSearchResult; // 2E0
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x318);
} // namespace ink
} // namespace RED4ext

// clang-format on
