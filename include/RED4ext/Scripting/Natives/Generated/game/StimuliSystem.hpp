#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStimuliSystem.hpp>

namespace RED4ext
{
namespace game
{
struct StimuliSystem : game::IStimuliSystem
{
    static constexpr const char* NAME = "gameStimuliSystem";
    static constexpr const char* ALIAS = "StimuliSystem";

    uint8_t unk48[0x6280 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StimuliSystem, 0x6280);
} // namespace game
using gameStimuliSystem = game::StimuliSystem;
using StimuliSystem = game::StimuliSystem;
} // namespace RED4ext

// clang-format on
