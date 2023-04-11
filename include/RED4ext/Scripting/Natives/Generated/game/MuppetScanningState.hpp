#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetScanningState
{
    static constexpr const char* NAME = "gameMuppetScanningState";
    static constexpr const char* ALIAS = NAME;

    bool isScanning; // 00
};
RED4EXT_ASSERT_SIZE(MuppetScanningState, 0x1);
} // namespace game
using gameMuppetScanningState = game::MuppetScanningState;
} // namespace RED4ext

// clang-format on
