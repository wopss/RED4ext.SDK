#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct VisualizersInfo
{
    static constexpr const char* NAME = "gameinteractionsvisVisualizersInfo";
    static constexpr const char* ALIAS = "VisualizersInfo";

    int32_t activeVisId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<int32_t> visIds; // 08
};
RED4EXT_ASSERT_SIZE(VisualizersInfo, 0x18);
} // namespace game::interactions::vis
using gameinteractionsvisVisualizersInfo = game::interactions::vis::VisualizersInfo;
using VisualizersInfo = game::interactions::vis::VisualizersInfo;
} // namespace RED4ext

// clang-format on
