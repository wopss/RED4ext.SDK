#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>

namespace RED4ext
{
namespace AI
{
struct MoveCommand : AI::Command
{
    static constexpr const char* NAME = "AIMoveCommand";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x61 - 0x60]; // 60
    bool removeAfterCombat; // 61
    bool ignoreInCombat; // 62
    bool alwaysUseStealth; // 63
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(MoveCommand, 0x68);
} // namespace AI
using AIMoveCommand = AI::MoveCommand;
} // namespace RED4ext

// clang-format on
