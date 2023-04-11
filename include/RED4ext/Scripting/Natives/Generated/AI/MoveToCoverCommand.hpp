#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct MoveToCoverCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIMoveToCoverCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MoveToCoverCommand, 0x68);
} // namespace AI
using AIMoveToCoverCommand = AI::MoveToCoverCommand;
} // namespace RED4ext

// clang-format on
