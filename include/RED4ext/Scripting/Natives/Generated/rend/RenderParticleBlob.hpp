#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EmitterSimulationShaders.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderParticleBlobHeader.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderParticleUpdaterData.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) RenderParticleBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderParticleBlob";
    static constexpr const char* ALIAS = NAME;

    rend::RenderParticleBlobHeader header; // 30
    rend::RenderParticleUpdaterData updaterData; // 110
    rend::EmitterSimulationShaders gpuSimShaders; // 1A8
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(RenderParticleBlob, 0x200);
} // namespace rend
using rendRenderParticleBlob = rend::RenderParticleBlob;
} // namespace RED4ext

// clang-format on
