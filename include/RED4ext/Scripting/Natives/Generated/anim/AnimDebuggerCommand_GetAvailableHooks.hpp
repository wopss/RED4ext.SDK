#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimDebuggerCommand.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimDebuggerCommand_GetAvailableHooks : anim::IAnimDebuggerCommand
{
    static constexpr const char* NAME = "animAnimDebuggerCommand_GetAvailableHooks";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AnimDebuggerCommand_GetAvailableHooks, 0x18);
} // namespace anim
using animAnimDebuggerCommand_GetAvailableHooks = anim::AnimDebuggerCommand_GetAvailableHooks;
} // namespace RED4ext

// clang-format on
