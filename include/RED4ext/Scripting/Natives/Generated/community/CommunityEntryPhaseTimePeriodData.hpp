#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace community
{
struct CommunityEntryPhaseTimePeriodData
{
    static constexpr const char* NAME = "communityCommunityEntryPhaseTimePeriodData";
    static constexpr const char* ALIAS = NAME;

    CName periodName; // 00
    DynArray<world::GlobalNodeID> spotNodeIds; // 08
    bool isSequence; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(CommunityEntryPhaseTimePeriodData, 0x20);
} // namespace community
using communityCommunityEntryPhaseTimePeriodData = community::CommunityEntryPhaseTimePeriodData;
} // namespace RED4ext

// clang-format on
