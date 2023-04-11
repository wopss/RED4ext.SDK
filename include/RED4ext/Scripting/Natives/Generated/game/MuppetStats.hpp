#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComponent.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetStats : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetStats";
    static constexpr const char* ALIAS = "MuppetStats";

    uint8_t unk90[0xA8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetStats, 0xA8);
} // namespace game
using gameMuppetStats = game::MuppetStats;
using MuppetStats = game::MuppetStats;
} // namespace RED4ext

// clang-format on
