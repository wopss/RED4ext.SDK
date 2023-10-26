#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) TeleportCommand : AI::Command
{
    static constexpr const char* NAME = "AITeleportCommand";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 60
    float rotation; // 70
    bool doNavTest; // 74
    uint8_t unk75[0x80 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(TeleportCommand, 0x80);
} // namespace AI
using AITeleportCommand = AI::TeleportCommand;
} // namespace RED4ext

// clang-format on
