#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CommandState.hpp>

namespace RED4ext
{
namespace AI
{
struct Command : IScriptable
{
    static constexpr const char* NAME = "AICommand";
    static constexpr const char* ALIAS = "NPCCommand";

    uint8_t unk40[0x48 - 0x40]; // 40
    uint32_t id; // 48
    AI::CommandState state; // 4C
    CName category; // 50
    uint64_t questBlockId; // 58
};
RED4EXT_ASSERT_SIZE(Command, 0x60);
} // namespace AI
using AICommand = AI::Command;
using NPCCommand = AI::Command;
} // namespace RED4ext

// clang-format on
