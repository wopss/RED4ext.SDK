#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/Chunk.hpp>

namespace RED4ext
{
struct CRenderMesh
{
    uint8_t unk00[0x10 - 0x00];   // 00
    Vector4 quantizationScale;    // 10
    Vector4 quantizationBias;     // 20
    uint32_t vertexBufferID;      // 30 - GpuApi buffer ID
    uint32_t indexBufferID;       // 34
    uint8_t unk38[0xa0 - 0x38];   // 38
    DynArray<rend::Chunk> chunks; // A0
    uint8_t unkB0[0x158 - 0xb0];  // B0
};
RED4EXT_ASSERT_SIZE(CRenderMesh, 0x158);

struct CRenderMorphTargetMesh : CRenderMesh
{
    uint8_t unk158[0x168 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(CRenderMorphTargetMesh, 0x168);
} // namespace RED4ext
