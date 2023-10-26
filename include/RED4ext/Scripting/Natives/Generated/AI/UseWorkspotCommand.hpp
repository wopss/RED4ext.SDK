#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/BaseUseWorkspotCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) UseWorkspotCommand : AI::BaseUseWorkspotCommand
{
    static constexpr const char* NAME = "AIUseWorkspotCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef workspotNode; // 130
    uint8_t unk138[0x140 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(UseWorkspotCommand, 0x140);
} // namespace AI
using AIUseWorkspotCommand = AI::UseWorkspotCommand;
} // namespace RED4ext

// clang-format on
