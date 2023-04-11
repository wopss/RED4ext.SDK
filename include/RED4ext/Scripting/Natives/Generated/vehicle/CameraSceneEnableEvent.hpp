#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CameraSceneEnableEvent : red::Event
{
    static constexpr const char* NAME = "vehicleCameraSceneEnableEvent";
    static constexpr const char* ALIAS = NAME;

    bool scene; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(CameraSceneEnableEvent, 0x48);
} // namespace vehicle
using vehicleCameraSceneEnableEvent = vehicle::CameraSceneEnableEvent;
} // namespace RED4ext

// clang-format on
