#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverSelectionRuntimeData.hpp>

namespace RED4ext
{
namespace AI
{
struct AngleDistanceCoverSelectionRuntimeData : AI::CoverSelectionRuntimeData
{
    static constexpr const char* NAME = "AIAngleDistanceCoverSelectionRuntimeData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AngleDistanceCoverSelectionRuntimeData, 0x10);
} // namespace AI
using AIAngleDistanceCoverSelectionRuntimeData = AI::AngleDistanceCoverSelectionRuntimeData;
} // namespace RED4ext

// clang-format on
