#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace appearance
{
struct ChunkMaskSettings
{
    static constexpr const char* NAME = "appearanceChunkMaskSettings";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint64_t> chunksIds; // 00
    DynArray<uint32_t> meshLayout; // 10
    uint64_t meshGeometryHash; // 20
};
RED4EXT_ASSERT_SIZE(ChunkMaskSettings, 0x28);
} // namespace appearance
using appearanceChunkMaskSettings = appearance::ChunkMaskSettings;
} // namespace RED4ext

// clang-format on
