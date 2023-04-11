#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CameraPlanesPreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct CameraClippingPlane_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questCameraClippingPlane_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::CameraPlanesPreset preset; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CameraClippingPlane_NodeType, 0x40);
} // namespace quest
using questCameraClippingPlane_NodeType = quest::CameraClippingPlane_NodeType;
} // namespace RED4ext

// clang-format on
