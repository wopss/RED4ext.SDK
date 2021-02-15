#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/rend/RenderTextureResource.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource : res::StreamedResource
{
    static constexpr const char* NAME = "CReflectionProbeDataResource";
    static constexpr const char* ALIAS = NAME;

    DataBuffer data; // 40
    rend::RenderTextureResource textureData; // 68
    uint64_t dataHash; // 78
    bool haveSkyData; // 80
    uint8_t unk81[0x84 - 0x81]; // 81
    NativeArray<float, 6> faceDepth; // 84
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(CReflectionProbeDataResource, 0xA0);
} // namespace RED4ext
