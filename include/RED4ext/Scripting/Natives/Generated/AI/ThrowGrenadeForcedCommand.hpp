#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ThrowGrenadeCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct ThrowGrenadeForcedCommand : AI::ThrowGrenadeCommand
{
    static constexpr const char* NAME = "AIThrowGrenadeForcedCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ThrowGrenadeForcedCommand, 0xB0);
} // namespace AI
using AIThrowGrenadeForcedCommand = AI::ThrowGrenadeForcedCommand;
} // namespace RED4ext

// clang-format on
