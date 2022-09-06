#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMeshChunkFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMeshChunkRenderMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMeshVertexType.hpp>
#include <RED4ext/Scripting/Natives/Generated/SMeshStream.hpp>

namespace RED4ext
{
struct SMeshChunkPacked
{
    static constexpr const char* NAME = "SMeshChunkPacked";
    static constexpr const char* ALIAS = NAME;

    EMeshVertexType vertexType; // 00
    EMeshChunkRenderMask renderMask; // 04
    EMeshChunkFlags chunkRenderMask; // 06
    uint8_t numBonesPerVertex; // 08
    bool useForShadowmesh; // 09
    uint8_t unk0A[0xC - 0xA]; // A
    uint32_t numVertices; // 0C
    uint32_t numIndices; // 10
    uint32_t firstVertex; // 14
    uint32_t firstIndex; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    uint64_t streamMask; // 20
    DynArray<CName> materialID; // 28
    DynArray<SMeshStream> streams; // 38
    uint8_t lodMask; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(SMeshChunkPacked, 0x50);
} // namespace RED4ext

// clang-format on
