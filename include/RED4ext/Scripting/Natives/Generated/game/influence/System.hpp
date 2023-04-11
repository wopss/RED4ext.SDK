#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/ISystem.hpp>

namespace RED4ext
{
namespace game::influence
{
struct System : game::influence::ISystem
{
    static constexpr const char* NAME = "gameinfluenceSystem";
    static constexpr const char* ALIAS = "InfluenceMapSystem";

    uint8_t unk48[0x1D8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(System, 0x1D8);
} // namespace game::influence
using gameinfluenceSystem = game::influence::System;
using InfluenceMapSystem = game::influence::System;
} // namespace RED4ext

// clang-format on
