#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FSMTransitionListDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct FSMEventTransitionsListDefinition
{
    static constexpr const char* NAME = "AIFSMEventTransitionsListDefinition";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 00
    AI::FSMTransitionListDefinition transitions; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(FSMEventTransitionsListDefinition, 0x10);
} // namespace AI
using AIFSMEventTransitionsListDefinition = AI::FSMEventTransitionsListDefinition;
} // namespace RED4ext

// clang-format on
