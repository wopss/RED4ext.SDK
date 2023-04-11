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
struct ExternalMovementCameraDataEvent : red::Event
{
    static constexpr const char* NAME = "gameExternalMovementCameraDataEvent";
    static constexpr const char* ALIAS = "ExternalMovementCameraDataEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ExternalMovementCameraDataEvent, 0x48);
} // namespace game
using gameExternalMovementCameraDataEvent = game::ExternalMovementCameraDataEvent;
using ExternalMovementCameraDataEvent = game::ExternalMovementCameraDataEvent;
} // namespace RED4ext

// clang-format on
