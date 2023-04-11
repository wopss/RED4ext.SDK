#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariableBoolBase.hpp>

namespace RED4ext
{
namespace AI
{
struct DefTreeVariableComparison : LibTreeDefTreeVariableBoolBase
{
    static constexpr const char* NAME = "AIDefTreeVariableComparison";
    static constexpr const char* ALIAS = NAME;

    uint16_t referenceVariableId; // 48
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    CName referenceVariableName; // 50
    CName referenceVariableShortName; // 58
    CName referenceType; // 60
    Variant referenceValue; // 68
    EComparisonType operator; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(DefTreeVariableComparison, 0x88);
} // namespace AI
using AIDefTreeVariableComparison = AI::DefTreeVariableComparison;
} // namespace RED4ext

// clang-format on
