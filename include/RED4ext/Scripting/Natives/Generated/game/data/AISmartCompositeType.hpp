#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AISmartCompositeType : int32_t
{
    Selector = 0,
    SelectorWithMemory = 1,
    SelectorWithSmartMemory = 2,
    Sequence = 3,
    SequenceWithMemory = 4,
    SequenceWithSmartMemory = 5,
    Count = 6,
    Invalid = 7,
};
} // namespace game::data
using gamedataAISmartCompositeType = game::data::AISmartCompositeType;
} // namespace RED4ext

// clang-format on
