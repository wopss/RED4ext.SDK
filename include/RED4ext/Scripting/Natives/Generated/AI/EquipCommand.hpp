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
struct EquipCommand : AI::Command
{
    static constexpr const char* NAME = "AIEquipCommand";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotId; // 60
    TweakDBID itemId; // 68
    bool failIfItemNotFound; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float durationOverride; // 74
};
RED4EXT_ASSERT_SIZE(EquipCommand, 0x78);
} // namespace AI
using AIEquipCommand = AI::EquipCommand;
} // namespace RED4ext

// clang-format on
