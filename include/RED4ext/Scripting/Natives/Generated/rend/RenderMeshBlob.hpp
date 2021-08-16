#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMeshBlobHeader.hpp>

namespace RED4ext
{
namespace rend { 
struct RenderMeshBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderMeshBlob";
    static constexpr const char* ALIAS = NAME;

    rend::RenderMeshBlobHeader header; // 30
    DataBuffer renderBuffer; // 100
    uint8_t unk128[0x130 - 0x128]; // 128
};
RED4EXT_ASSERT_SIZE(RenderMeshBlob, 0x130);
} // namespace rend
} // namespace RED4ext
