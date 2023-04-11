#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceDynamicConnectionChange : red::Event
{
    static constexpr const char* NAME = "gameDeviceDynamicConnectionChange";
    static constexpr const char* ALIAS = "DeviceDynamicConnectionChange";

};
RED4EXT_ASSERT_SIZE(DeviceDynamicConnectionChange, 0x40);
} // namespace game
using gameDeviceDynamicConnectionChange = game::DeviceDynamicConnectionChange;
using DeviceDynamicConnectionChange = game::DeviceDynamicConnectionChange;
} // namespace RED4ext

// clang-format on
