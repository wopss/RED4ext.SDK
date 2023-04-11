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
struct DevicePSChanged : red::Event
{
    static constexpr const char* NAME = "gameDevicePSChanged";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DevicePSChanged, 0x40);
} // namespace game
using gameDevicePSChanged = game::DevicePSChanged;
} // namespace RED4ext

// clang-format on
