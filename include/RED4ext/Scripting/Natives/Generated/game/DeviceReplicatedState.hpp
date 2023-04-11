#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceReplicatedState : IScriptable
{
    static constexpr const char* NAME = "gameDeviceReplicatedState";
    static constexpr const char* ALIAS = "DeviceReplicatedState";

};
RED4EXT_ASSERT_SIZE(DeviceReplicatedState, 0x40);
} // namespace game
using gameDeviceReplicatedState = game::DeviceReplicatedState;
using DeviceReplicatedState = game::DeviceReplicatedState;
} // namespace RED4ext

// clang-format on
