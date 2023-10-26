#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountDescriptor.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) PlayMountedSlotWorkspotCommand : AI::Command
{
    static constexpr const char* NAME = "AIPlayMountedSlotWorkspotCommand";
    static constexpr const char* ALIAS = NAME;

    game::MountDescriptor mountData; // 60
};
RED4EXT_ASSERT_SIZE(PlayMountedSlotWorkspotCommand, 0xA0);
} // namespace AI
using AIPlayMountedSlotWorkspotCommand = AI::PlayMountedSlotWorkspotCommand;
} // namespace RED4ext

// clang-format on
