#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace community { struct CommunityTemplateData; }

namespace community { 
struct CommunityTemplate : CResource
{
    static constexpr const char* NAME = "communityCommunityTemplate";
    static constexpr const char* ALIAS = NAME;

    Handle<community::CommunityTemplateData> communityTemplate; // 40
};
RED4EXT_ASSERT_SIZE(CommunityTemplate, 0x50);
} // namespace community
} // namespace RED4ext
