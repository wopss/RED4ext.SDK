#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStreamingMonitorSystem.hpp>

namespace RED4ext
{
namespace game
{
struct StreamingMonitorSystem : game::IStreamingMonitorSystem
{
    static constexpr const char* NAME = "gameStreamingMonitorSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StreamingMonitorSystem, 0xA0);
} // namespace game
using gameStreamingMonitorSystem = game::StreamingMonitorSystem;
} // namespace RED4ext

// clang-format on
