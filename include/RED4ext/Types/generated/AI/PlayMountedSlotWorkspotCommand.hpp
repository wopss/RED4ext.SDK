#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/Command.hpp>
#include <RED4ext/Types/generated/game/MountDescriptor.hpp>

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
