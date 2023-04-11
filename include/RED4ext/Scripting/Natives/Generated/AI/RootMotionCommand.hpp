#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>

namespace RED4ext
{
namespace game { struct SceneAnimationMotionActionParams; }

namespace AI
{
struct RootMotionCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIRootMotionCommand";
    static constexpr const char* ALIAS = NAME;

    Handle<game::SceneAnimationMotionActionParams> params; // 68
};
RED4EXT_ASSERT_SIZE(RootMotionCommand, 0x78);
} // namespace AI
using AIRootMotionCommand = AI::RootMotionCommand;
} // namespace RED4ext

// clang-format on
