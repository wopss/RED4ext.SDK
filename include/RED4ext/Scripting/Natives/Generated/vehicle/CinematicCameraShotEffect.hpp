#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CinematicCameraShotEffect : IScriptable
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotEffect";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CinematicCameraShotEffect, 0x40);
} // namespace vehicle
using vehicleCinematicCameraShotEffect = vehicle::CinematicCameraShotEffect;
} // namespace RED4ext

// clang-format on
