#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/ink/DeleteRequestResult.hpp>
#include <RED4ext/Types/generated/ink/SaveMetadataRequestResult.hpp>
#include <RED4ext/Types/generated/ink/SystemRequesResult.hpp>
#include <RED4ext/Types/generated/ink/SystemServerRequesResult.hpp>
#include <RED4ext/Types/generated/ink/UserIdResult.hpp>

namespace RED4ext
{
namespace ink { 
struct ISystemRequestsHandler : IScriptable
{
    static constexpr const char* NAME = "inkISystemRequestsHandler";
    static constexpr const char* ALIAS = NAME;

    ink::SystemRequesResult SavesReady; // 40
    ink::SaveMetadataRequestResult SaveMetadataReady; // 78
    ink::DeleteRequestResult SaveDeleted; // B0
    ink::UserIdResult UserIdResult; // E8
    ink::UserIdResult UserChanged; // 120
    ink::SystemServerRequesResult ServersSearchResult; // 158
};
RED4EXT_ASSERT_SIZE(ISystemRequestsHandler, 0x190);
} // namespace ink
} // namespace RED4ext
