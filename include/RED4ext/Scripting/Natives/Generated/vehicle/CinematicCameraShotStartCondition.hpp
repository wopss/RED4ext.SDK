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
struct CinematicCameraShotStartCondition : IScriptable
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotStartCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CinematicCameraShotStartCondition, 0x40);
} // namespace vehicle
using vehicleCinematicCameraShotStartCondition = vehicle::CinematicCameraShotStartCondition;
} // namespace RED4ext

// clang-format on
