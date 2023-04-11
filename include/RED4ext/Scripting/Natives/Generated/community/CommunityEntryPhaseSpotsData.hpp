#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/CommunityEntryPhaseTimePeriodData.hpp>

namespace RED4ext
{
namespace community
{
struct CommunityEntryPhaseSpotsData
{
    static constexpr const char* NAME = "communityCommunityEntryPhaseSpotsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<community::CommunityEntryPhaseTimePeriodData> timePeriodsData; // 00
    CName entryPhaseName; // 10
};
RED4EXT_ASSERT_SIZE(CommunityEntryPhaseSpotsData, 0x18);
} // namespace community
using communityCommunityEntryPhaseSpotsData = community::CommunityEntryPhaseSpotsData;
} // namespace RED4ext

// clang-format on
