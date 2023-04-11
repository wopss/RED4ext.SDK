#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsListener.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptStatsListener : game::IStatsListener
{
    static constexpr const char* NAME = "gameScriptStatsListener";
    static constexpr const char* ALIAS = "ScriptStatsListener";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptStatsListener, 0x48);
} // namespace game
using gameScriptStatsListener = game::ScriptStatsListener;
using ScriptStatsListener = game::ScriptStatsListener;
} // namespace RED4ext

// clang-format on
