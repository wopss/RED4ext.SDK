#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct IVisualizerTimeProvider : IScriptable
{
    static constexpr const char* NAME = "gameinteractionsvisIVisualizerTimeProvider";
    static constexpr const char* ALIAS = "IVisualizerTimeProvider";

};
RED4EXT_ASSERT_SIZE(IVisualizerTimeProvider, 0x40);
} // namespace game::interactions::vis
using gameinteractionsvisIVisualizerTimeProvider = game::interactions::vis::IVisualizerTimeProvider;
using IVisualizerTimeProvider = game::interactions::vis::IVisualizerTimeProvider;
} // namespace RED4ext

// clang-format on
