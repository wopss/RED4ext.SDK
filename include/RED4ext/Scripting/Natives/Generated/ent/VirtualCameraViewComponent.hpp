#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct VirtualCameraViewComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entVirtualCameraViewComponent";
    static constexpr const char* ALIAS = "VirtualCameraViewComponent";

    CName virtualCameraName; // 140
    Vector2 targetPlaneSize; // 148
    uint8_t unk150[0x170 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(VirtualCameraViewComponent, 0x170);
} // namespace ent
using VirtualCameraViewComponent = ent::VirtualCameraViewComponent;
} // namespace RED4ext
