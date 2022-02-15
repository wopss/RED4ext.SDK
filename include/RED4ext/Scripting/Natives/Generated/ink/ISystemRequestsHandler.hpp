#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DeleteRequestResult.hpp>
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
    ink::TrialVersionRemainingTimeUpdate TrialVersionRemainingTimeUpdated; // E8
    ink::TrialOnBuyFullGame BoughtFullGame; // 120
    ink::DeleteRequestResult SaveDeleted; // 158
    ink::SaveTransferRequestUpdate SaveTransferUpdate; // 190
    ink::UserIdResult UserIdResult; // 1C8
    ink::UserIdResult UserChanged; // 200
    ink::SystemServerRequesResult ServersSearchResult; // 238
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x270);
} // namespace ink
} // namespace RED4ext
