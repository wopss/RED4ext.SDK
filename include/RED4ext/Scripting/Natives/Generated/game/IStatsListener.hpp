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
struct IStatsListener : IScriptable
{
    static constexpr const char* NAME = "gameIStatsListener";
    static constexpr const char* ALIAS = "IStatsListener";

};
RED4EXT_ASSERT_SIZE(IStatsListener, 0x40);
} // namespace game
using gameIStatsListener = game::IStatsListener;
using IStatsListener = game::IStatsListener;
} // namespace RED4ext

// clang-format on
