#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPoliceRadioSystem.hpp>

namespace RED4ext
{
namespace game
{
struct PoliceRadioSystem : game::IPoliceRadioSystem
{
    static constexpr const char* NAME = "gamePoliceRadioSystem";
    static constexpr const char* ALIAS = "PoliceRadioSystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PoliceRadioSystem, 0x50);
} // namespace game
using gamePoliceRadioSystem = game::PoliceRadioSystem;
using PoliceRadioSystem = game::PoliceRadioSystem;
} // namespace RED4ext

// clang-format on
