#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CombatRelatedCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverExposureMethod.hpp>

namespace RED4ext
{
namespace AI
{
struct UseCoverCommand : AI::CombatRelatedCommand
{
    static constexpr const char* NAME = "AIUseCoverCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef coverNodeRef; // 68
    bool oneTimeSelection; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    CName forcedEntryAnimation; // 78
    DynArray<AI::CoverExposureMethod> exposureMethods; // 80
};
RED4EXT_ASSERT_SIZE(UseCoverCommand, 0x90);
} // namespace AI
using AIUseCoverCommand = AI::UseCoverCommand;
} // namespace RED4ext

// clang-format on
