#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/CoverSelectionParameters.hpp>

namespace RED4ext
{
namespace AI { 
struct ThreatDistanceCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AIThreatDistanceCoverSelection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x28 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(ThreatDistanceCoverSelection, 0x28);
} // namespace AI
} // namespace RED4ext
