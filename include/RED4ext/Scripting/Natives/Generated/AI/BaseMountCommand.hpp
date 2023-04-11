#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>

namespace RED4ext
{
namespace game { struct MountEventData; }

namespace AI
{
struct BaseMountCommand : AI::Command
{
    static constexpr const char* NAME = "AIBaseMountCommand";
    static constexpr const char* ALIAS = NAME;

    Handle<game::MountEventData> mountData; // 60
};
RED4EXT_ASSERT_SIZE(BaseMountCommand, 0x70);
} // namespace AI
using AIBaseMountCommand = AI::BaseMountCommand;
} // namespace RED4ext

// clang-format on
