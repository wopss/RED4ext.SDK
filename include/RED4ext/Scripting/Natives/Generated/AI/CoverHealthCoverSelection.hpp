#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverSelectionParameters.hpp>

namespace RED4ext
{
namespace AI
{
struct CoverHealthCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AICoverHealthCoverSelection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(CoverHealthCoverSelection, 0x18);
} // namespace AI
using AICoverHealthCoverSelection = AI::CoverHealthCoverSelection;
} // namespace RED4ext

// clang-format on
