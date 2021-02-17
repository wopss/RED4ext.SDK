#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/EComparisonType.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckSpeakersDistanceInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckSpeakersDistanceInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    float distance; // 00
    EComparisonType comparisonType; // 04
};
RED4EXT_ASSERT_SIZE(CheckSpeakersDistanceInterruptConditionParams, 0x8);
} // namespace scn
} // namespace RED4ext
