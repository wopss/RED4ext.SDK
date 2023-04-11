#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>

namespace RED4ext
{
namespace AI
{
struct AssignGuardAreaCommand : AI::Command
{
    static constexpr const char* NAME = "AIAssignGuardAreaCommand";
    static constexpr const char* ALIAS = "AIAssignRestrictMovementAreaCommand";

    NodeRef restrictMovementAreaRef; // 60
};
RED4EXT_ASSERT_SIZE(AssignGuardAreaCommand, 0x68);
} // namespace AI
using AIAssignGuardAreaCommand = AI::AssignGuardAreaCommand;
using AIAssignRestrictMovementAreaCommand = AI::AssignGuardAreaCommand;
} // namespace RED4ext

// clang-format on
