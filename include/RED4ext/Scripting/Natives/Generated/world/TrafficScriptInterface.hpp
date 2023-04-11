#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldTrafficScriptInterface";
    static constexpr const char* ALIAS = "TrafficSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TrafficScriptInterface, 0x48);
} // namespace world
using worldTrafficScriptInterface = world::TrafficScriptInterface;
using TrafficSystem = world::TrafficScriptInterface;
} // namespace RED4ext

// clang-format on
