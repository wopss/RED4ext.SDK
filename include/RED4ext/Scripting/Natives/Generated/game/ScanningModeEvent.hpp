#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningModeEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningModeEvent";
    static constexpr const char* ALIAS = "ScanningModeEvent";

    game::ScanningMode mode; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ScanningModeEvent, 0x48);
} // namespace game
using gameScanningModeEvent = game::ScanningModeEvent;
using ScanningModeEvent = game::ScanningModeEvent;
} // namespace RED4ext

// clang-format on
