#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct IVisualizerLogicInterface : ISerializable
{
    static constexpr const char* NAME = "gameinteractionsvisIVisualizerLogicInterface";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVisualizerLogicInterface, 0x30);
} // namespace game::interactions::vis
using gameinteractionsvisIVisualizerLogicInterface = game::interactions::vis::IVisualizerLogicInterface;
} // namespace RED4ext

// clang-format on
