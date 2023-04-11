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
struct CoverTypeCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AICoverTypeCoverSelection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x20 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(CoverTypeCoverSelection, 0x20);
} // namespace AI
using AICoverTypeCoverSelection = AI::CoverTypeCoverSelection;
} // namespace RED4ext

// clang-format on
