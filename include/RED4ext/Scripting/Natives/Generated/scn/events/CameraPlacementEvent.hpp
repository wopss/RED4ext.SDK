#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct __declspec(align(0x10)) CameraPlacementEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsCameraPlacementEvent";
    static constexpr const char* ALIAS = NAME;

    NodeRef cameraRef; // 58
    Transform cameraTransformLS; // 60
};
RED4EXT_ASSERT_SIZE(CameraPlacementEvent, 0x80);
} // namespace scn::events
using scneventsCameraPlacementEvent = scn::events::CameraPlacementEvent;
} // namespace RED4ext

// clang-format on
