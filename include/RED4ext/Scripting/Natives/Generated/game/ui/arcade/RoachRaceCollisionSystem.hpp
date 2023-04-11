#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceCollisionSystem : IScriptable
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceCollisionSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(RoachRaceCollisionSystem, 0x78);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceCollisionSystem = game::ui::arcade::RoachRaceCollisionSystem;
} // namespace RED4ext

// clang-format on
