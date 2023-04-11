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
struct AnimDebuggerCommand_HooksUnregistered : anim::IAnimDebuggerCommand
{
    static constexpr const char* NAME = "animAnimDebuggerCommand_HooksUnregistered";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x20 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AnimDebuggerCommand_HooksUnregistered, 0x20);
} // namespace anim
using animAnimDebuggerCommand_HooksUnregistered = anim::AnimDebuggerCommand_HooksUnregistered;
} // namespace RED4ext

// clang-format on
