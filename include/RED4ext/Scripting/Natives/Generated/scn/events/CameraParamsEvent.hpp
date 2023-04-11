#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/CameraOverrideSettings.hpp>

namespace RED4ext
{
namespace scn::events
{
struct CameraParamsEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsCameraParamsEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef cameraRef; // 58
    float fovValue; // 60
    float fovWeigh; // 64
    float dofIntensity; // 68
    float dofNearBlur; // 6C
    float dofNearFocus; // 70
    float dofFarBlur; // 74
    float dofFarFocus; // 78
    bool useNearPlane; // 7C
    bool useFarPlane; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
    scn::PerformerId targetActor; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    CName targetSlot; // 88
    bool isPlayerCamera; // 90
    scn::events::CameraOverrideSettings cameraOverrideSettings; // 91
    uint8_t unk95[0x98 - 0x95]; // 95
};
RED4EXT_ASSERT_SIZE(CameraParamsEvent, 0x98);
} // namespace scn::events
using scneventsCameraParamsEvent = scn::events::CameraParamsEvent;
} // namespace RED4ext

// clang-format on
