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
struct OwnerAngleCoverSelection : AI::CoverSelectionParameters
{
    static constexpr const char* NAME = "AIOwnerAngleCoverSelection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(OwnerAngleCoverSelection, 0x18);
} // namespace AI
using AIOwnerAngleCoverSelection = AI::OwnerAngleCoverSelection;
} // namespace RED4ext

// clang-format on
