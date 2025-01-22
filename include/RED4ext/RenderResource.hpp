#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/Chunk.hpp>
#include <RED4ext/Scripting/Natives/Vector4.hpp>

#include <cstdint>

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
RED4EXT_ASSERT_OFFSET(CRenderMesh, quantizationScale, 0x10);
RED4EXT_ASSERT_OFFSET(CRenderMesh, quantizationBias, 0x20);
RED4EXT_ASSERT_OFFSET(CRenderMesh, vertexBufferID, 0x30);
RED4EXT_ASSERT_OFFSET(CRenderMesh, indexBufferID, 0x34);
RED4EXT_ASSERT_OFFSET(CRenderMesh, chunks, 0xA0);

struct CRenderMorphTargetMesh : CRenderMesh
{
    uint8_t unk158[0x160 - 0x158]; // 158
    uint32_t baseVertexBufferID;   // 160
    uint8_t unk164[0x168 - 0x164]; // 164
};
RED4EXT_ASSERT_SIZE(CRenderMorphTargetMesh, 0x168);
RED4EXT_ASSERT_OFFSET(CRenderMorphTargetMesh, baseVertexBufferID, 0x160);
} // namespace RED4ext
