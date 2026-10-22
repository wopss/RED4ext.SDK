#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Effector.hpp>

namespace RED4ext
{
namespace game
{
struct ContinuousEffector : game::Effector
{
    static constexpr const char* NAME = "gameContinuousEffector";
    static constexpr const char* ALIAS = "ContinuousEffector";

    uint8_t unkB0[0xC0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(ContinuousEffector, 0xC0);
} // namespace game
using gameContinuousEffector = game::ContinuousEffector;
using ContinuousEffector = game::ContinuousEffector;
} // namespace RED4ext

// clang-format on
