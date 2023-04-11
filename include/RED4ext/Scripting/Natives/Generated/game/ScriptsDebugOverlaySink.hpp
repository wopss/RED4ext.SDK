#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptsDebugOverlaySink
{
    static constexpr const char* NAME = "gameScriptsDebugOverlaySink";
    static constexpr const char* ALIAS = "SDOSink";

    uint8_t unk00[0x28 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptsDebugOverlaySink, 0x28);
} // namespace game
using gameScriptsDebugOverlaySink = game::ScriptsDebugOverlaySink;
using SDOSink = game::ScriptsDebugOverlaySink;
} // namespace RED4ext

// clang-format on
