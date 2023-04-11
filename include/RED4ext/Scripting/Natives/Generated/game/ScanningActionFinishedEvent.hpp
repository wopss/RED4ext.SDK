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
struct ScanningActionFinishedEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningActionFinishedEvent";
    static constexpr const char* ALIAS = "ScanningActionFinishedEvent";

};
RED4EXT_ASSERT_SIZE(ScanningActionFinishedEvent, 0x40);
} // namespace game
using gameScanningActionFinishedEvent = game::ScanningActionFinishedEvent;
using ScanningActionFinishedEvent = game::ScanningActionFinishedEvent;
} // namespace RED4ext

// clang-format on
