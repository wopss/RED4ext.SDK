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

    CName virtualCameraName; // 1C0
    uint32_t resolutionWidth; // 1C8
    uint32_t resolutionHeight; // 1CC
    bool drawBackground; // 1D0
    uint8_t unk1D1[0x1E0 - 0x1D1]; // 1D1
};
RED4EXT_ASSERT_SIZE(VirtualCameraComponent, 0x1E0);
} // namespace ent
using VirtualCameraComponent = ent::VirtualCameraComponent;
} // namespace RED4ext
