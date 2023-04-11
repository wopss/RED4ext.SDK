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
struct MountCommand : AI::BaseMountCommand
{
    static constexpr const char* NAME = "AIMountCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MountCommand, 0x70);
} // namespace AI
using AIMountCommand = AI::MountCommand;
} // namespace RED4ext

// clang-format on
