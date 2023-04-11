#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICompanionSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CompanionSystem : game::ICompanionSystem
{
    static constexpr const char* NAME = "gameCompanionSystem";
    static constexpr const char* ALIAS = "CompanionSystem";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CompanionSystem, 0x58);
} // namespace game
using gameCompanionSystem = game::CompanionSystem;
using CompanionSystem = game::CompanionSystem;
} // namespace RED4ext

// clang-format on
