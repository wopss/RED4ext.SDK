#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource : res::StreamedResource
{
    static constexpr const char* NAME = "CReflectionProbeDataResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
    DataBuffer data; // 48
    rend::RenderTextureResource textureData; // 70
    uint64_t dataHash; // 80
    bool haveSkyData; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    NativeArray<float, 6> faceDepth; // 8C
    uint8_t unkA4[0xA8 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(CReflectionProbeDataResource, 0xA8);
} // namespace RED4ext

// clang-format on
