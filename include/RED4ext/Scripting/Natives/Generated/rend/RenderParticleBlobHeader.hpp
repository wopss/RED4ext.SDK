#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderParticleBlobEmitterInfo.hpp>

namespace RED4ext
{
namespace rend { 
struct RenderParticleBlobHeader
{
    static constexpr const char* NAME = "rendRenderParticleBlobHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    rend::RenderParticleBlobEmitterInfo emitterInfo; // 10
};
RED4EXT_ASSERT_SIZE(RenderParticleBlobHeader, 0xE0);
} // namespace rend
} // namespace RED4ext
