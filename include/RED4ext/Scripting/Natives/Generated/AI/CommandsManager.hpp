#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ICommandsManager.hpp>

namespace RED4ext
{
namespace AI
{
struct CommandsManager : AI::ICommandsManager
{
    static constexpr const char* NAME = "AICommandsManager";
    static constexpr const char* ALIAS = "CommandsManager";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CommandsManager, 0x58);
} // namespace AI
using AICommandsManager = AI::CommandsManager;
using CommandsManager = AI::CommandsManager;
} // namespace RED4ext

// clang-format on
