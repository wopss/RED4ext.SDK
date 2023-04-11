#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct MappingExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorMappingExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> mapping; // 40
    bool update; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float updatePeriod; // 54
    DynArray<CName> behaviorCallbackNames; // 58
};
RED4EXT_ASSERT_SIZE(MappingExpressionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorMappingExpressionDefinition = AI::behavior::MappingExpressionDefinition;
} // namespace RED4ext

// clang-format on
