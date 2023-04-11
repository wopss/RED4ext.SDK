#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct CameraEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsCameraEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef cameraRef; // 58
    float blendTime; // 60
    bool isBlendIn; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(CameraEvent, 0x68);
} // namespace scn::events
using scneventsCameraEvent = scn::events::CameraEvent;
} // namespace RED4ext

// clang-format on
