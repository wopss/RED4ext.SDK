#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct VirtualCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entVirtualCameraComponent";
    static constexpr const char* ALIAS = "VirtualCameraComponent";

    CName virtualCameraName; // 1D0
    uint32_t resolutionWidth; // 1D8
    uint32_t resolutionHeight; // 1DC
    bool drawBackground; // 1E0
    uint8_t unk1E1[0x1F0 - 0x1E1]; // 1E1
};
RED4EXT_ASSERT_SIZE(VirtualCameraComponent, 0x1F0);
} // namespace ent
using VirtualCameraComponent = ent::VirtualCameraComponent;
} // namespace RED4ext
