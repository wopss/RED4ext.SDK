#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningPulseStartEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningPulseStartEvent";
    static constexpr const char* ALIAS = "ScanningPulseStartEvent";

    int32_t targetsAffected; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ScanningPulseStartEvent, 0x48);
} // namespace game
using gameScanningPulseStartEvent = game::ScanningPulseStartEvent;
using ScanningPulseStartEvent = game::ScanningPulseStartEvent;
} // namespace RED4ext

// clang-format on
