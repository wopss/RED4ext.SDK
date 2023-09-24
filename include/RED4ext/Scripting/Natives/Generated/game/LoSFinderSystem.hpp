#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LoSIFinderSystem.hpp>

namespace RED4ext
{
namespace game
{
struct LoSFinderSystem : game::LoSIFinderSystem
{
    static constexpr const char* NAME = "gameLoSFinderSystem";
    static constexpr const char* ALIAS = "LoSFinderSystem";

    uint8_t unk48[0x130 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LoSFinderSystem, 0x130);
} // namespace game
using gameLoSFinderSystem = game::LoSFinderSystem;
using LoSFinderSystem = game::LoSFinderSystem;
} // namespace RED4ext

// clang-format on
