#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/IRenderResourceBlob.hpp>
#include <RED4ext/Types/generated/rend/RenderMorphTargetMeshBlobHeader.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

namespace rend { 
struct RenderMorphTargetMeshBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderMorphTargetMeshBlob";
    static constexpr const char* ALIAS = NAME;

    Handle<IRenderResourceBlob> baseBlob; // 30
    rend::RenderMorphTargetMeshBlobHeader header; // 40
    DataBuffer diffsBuffer; // C0
    DataBuffer mappingBuffer; // E8
    DeferredDataBuffer textureDiffsBuffer; // 110
};
RED4EXT_ASSERT_SIZE(RenderMorphTargetMeshBlob, 0x168);
} // namespace rend
} // namespace RED4ext
