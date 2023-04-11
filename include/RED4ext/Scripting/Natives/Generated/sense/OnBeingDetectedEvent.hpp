#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense { struct SensorObject; }

namespace sense
{
struct OnBeingDetectedEvent : red::Event
{
    static constexpr const char* NAME = "senseOnBeingDetectedEvent";
    static constexpr const char* ALIAS = "OnBeingDetectedEvent";

    WeakHandle<sense::SensorObject> source; // 40
    TweakDBID shapeId; // 50
    bool isVisible; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(OnBeingDetectedEvent, 0x60);
} // namespace sense
using senseOnBeingDetectedEvent = sense::OnBeingDetectedEvent;
using OnBeingDetectedEvent = sense::OnBeingDetectedEvent;
} // namespace RED4ext

// clang-format on
