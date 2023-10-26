#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) VirtualCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entVirtualCameraComponent";
    static constexpr const char* ALIAS = "VirtualCameraComponent";

    CName virtualCameraName; // 1E0
    uint32_t resolutionWidth; // 1E8
    uint32_t resolutionHeight; // 1EC
    bool drawBackground; // 1F0
    uint8_t unk1F1[0x200 - 0x1F1]; // 1F1
};
RED4EXT_ASSERT_SIZE(VirtualCameraComponent, 0x200);
} // namespace ent
using entVirtualCameraComponent = ent::VirtualCameraComponent;
using VirtualCameraComponent = ent::VirtualCameraComponent;
} // namespace RED4ext

// clang-format on
