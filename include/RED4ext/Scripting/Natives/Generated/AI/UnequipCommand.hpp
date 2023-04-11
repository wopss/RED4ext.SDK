#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>

namespace RED4ext
{
namespace AI
{
struct UnequipCommand : AI::Command
{
    static constexpr const char* NAME = "AIUnequipCommand";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotId; // 60
    float durationOverride; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(UnequipCommand, 0x70);
} // namespace AI
using AIUnequipCommand = AI::UnequipCommand;
} // namespace RED4ext

// clang-format on
