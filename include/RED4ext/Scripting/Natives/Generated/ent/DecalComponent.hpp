#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDecalRenderMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct IMaterial;

namespace ent
{
struct __declspec(align(0x10)) DecalComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entDecalComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x150 - 0x140]; // 140
    Ref<IMaterial> material; // 150
    Vector3 visualScale; // 168
    float aspectRatio; // 174
    float scale; // 178
    float alpha; // 17C
    float normalThreshold; // 180
    float roughnessScale; // 184
    uint16_t orderNo; // 188
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 18A
    ERenderObjectType surfaceType; // 18B
    EDecalRenderMode decalRenderMode; // 18C
    bool verticalFlip; // 18D
    bool horizontalFlip; // 18E
    bool isStretchingEnabled; // 18F
    bool shouldCollectWithRayTracing; // 190
    uint8_t unk191[0x1A0 - 0x191]; // 191
};
RED4EXT_ASSERT_SIZE(DecalComponent, 0x1A0);
} // namespace ent
using entDecalComponent = ent::DecalComponent;
} // namespace RED4ext

// clang-format on
