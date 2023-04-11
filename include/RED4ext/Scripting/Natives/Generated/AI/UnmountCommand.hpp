#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/BaseMountCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct UnmountCommand : AI::BaseMountCommand
{
    static constexpr const char* NAME = "AIUnmountCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(UnmountCommand, 0x70);
} // namespace AI
using AIUnmountCommand = AI::UnmountCommand;
} // namespace RED4ext

// clang-format on
