#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningEvent";
    static constexpr const char* ALIAS = "ScanningEvent";

    game::ScanningState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ScanningEvent, 0x48);
} // namespace game
using gameScanningEvent = game::ScanningEvent;
using ScanningEvent = game::ScanningEvent;
} // namespace RED4ext

// clang-format on
