#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningState.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameScanningComponentPS";
    static constexpr const char* ALIAS = NAME;

    game::ScanningState scanningState; // 68
    float pctScanned; // 6C
    bool isBlocked; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(ScanningComponentPS, 0x78);
} // namespace game
using gameScanningComponentPS = game::ScanningComponentPS;
} // namespace RED4ext

// clang-format on
