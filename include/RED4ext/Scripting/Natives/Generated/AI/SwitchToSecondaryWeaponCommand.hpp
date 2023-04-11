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
struct SwitchToSecondaryWeaponCommand : AI::Command
{
    static constexpr const char* NAME = "AISwitchToSecondaryWeaponCommand";
    static constexpr const char* ALIAS = NAME;

    bool unEquip; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(SwitchToSecondaryWeaponCommand, 0x68);
} // namespace AI
using AISwitchToSecondaryWeaponCommand = AI::SwitchToSecondaryWeaponCommand;
} // namespace RED4ext

// clang-format on
