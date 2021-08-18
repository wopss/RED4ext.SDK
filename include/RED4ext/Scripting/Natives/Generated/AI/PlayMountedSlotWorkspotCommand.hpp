#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountDescriptor.hpp>

namespace RED4ext
{
namespace AI { 
struct PlayMountedSlotWorkspotCommand : AI::Command
{
    static constexpr const char* NAME = "AIPlayMountedSlotWorkspotCommand";
    static constexpr const char* ALIAS = NAME;

    game::MountDescriptor mountData; // 60
};
RED4EXT_ASSERT_SIZE(PlayMountedSlotWorkspotCommand, 0xA0);
} // namespace AI
} // namespace RED4ext
