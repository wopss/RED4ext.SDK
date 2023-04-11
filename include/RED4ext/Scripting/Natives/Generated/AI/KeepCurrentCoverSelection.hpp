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
struct KeepCurrentCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AIKeepCurrentCoverSelection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(KeepCurrentCoverSelection, 0x18);
} // namespace AI
using AIKeepCurrentCoverSelection = AI::KeepCurrentCoverSelection;
} // namespace RED4ext

// clang-format on
