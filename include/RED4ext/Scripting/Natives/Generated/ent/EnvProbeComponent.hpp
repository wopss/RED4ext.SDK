#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsNeighborMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsReflectionProbeAmbientContributionMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource;

namespace ent
{
struct __declspec(align(0x10)) EnvProbeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entEnvProbeComponent";
    static constexpr const char* ALIAS = "EnvProbeComponent";

    uint8_t unk140[0x150 - 0x140]; // 140
    RaRef<CReflectionProbeDataResource> probeDataRef; // 150
    Vector3 size; // 158
    Vector3 edgeScale; // 164
    float emissiveScale; // 170
    float streamingDistance; // 174
    float streamingHeight; // 178
    uint8_t unk17C[0x17E - 0x17C]; // 17C
    bool globalProbe; // 17E
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 17F
    bool allInShadow; // 180
    bool hideSkyColor; // 181
    bool boxProjection; // 182
    uint8_t brightnessEVClamp; // 183
    uint8_t priority; // 184
    uint8_t blendRange; // 185
    rend::LightChannel lightChannels; // 186
    rend::LightChannel volumeChannels; // 188
    env::UtilsNeighborMode neighborMode; // 18A
    uint8_t unk18B[0x190 - 0x18B]; // 18B
};
RED4EXT_ASSERT_SIZE(EnvProbeComponent, 0x190);
} // namespace ent
using entEnvProbeComponent = ent::EnvProbeComponent;
using EnvProbeComponent = ent::EnvProbeComponent;
} // namespace RED4ext

// clang-format on
