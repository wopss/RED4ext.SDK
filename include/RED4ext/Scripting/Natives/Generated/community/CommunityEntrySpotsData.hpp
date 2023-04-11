#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/CommunityEntryPhaseSpotsData.hpp>

namespace RED4ext
{
namespace community
{
struct CommunityEntrySpotsData
{
    static constexpr const char* NAME = "communityCommunityEntrySpotsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<community::CommunityEntryPhaseSpotsData> phasesData; // 00
    CName entryName; // 10
};
RED4EXT_ASSERT_SIZE(CommunityEntrySpotsData, 0x18);
} // namespace community
using communityCommunityEntrySpotsData = community::CommunityEntrySpotsData;
} // namespace RED4ext

// clang-format on
