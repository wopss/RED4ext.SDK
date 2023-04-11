#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/OpacityMicromapUsageCounts.hpp>

namespace RED4ext
{
namespace rend
{
struct OpacityMicromapChunk
{
    static constexpr const char* NAME = "rendOpacityMicromapChunk";
    static constexpr const char* ALIAS = NAME;

    uint32_t mChunkIndex; // 00
    uint32_t unkIndex; // 04
    uint64_t terialIdentifier; // 08
    CName terialName; // 10
    uint64_t mDigest; // 18
    uint32_t mIndexBufferSize; // 20
    uint32_t mIndexBuffer16bit; // 24
    uint64_t mIndexBufferOffset; // 28
    uint64_t mArrayBufferOffset; // 30
    uint64_t mDescsBufferOffset; // 38
    DynArray<rend::OpacityMicromapUsageCounts> mDescArrayHistogramData; // 40
    DynArray<rend::OpacityMicromapUsageCounts> mIndexHistogramData; // 50
};
RED4EXT_ASSERT_SIZE(OpacityMicromapChunk, 0x60);
} // namespace rend
using rendOpacityMicromapChunk = rend::OpacityMicromapChunk;
} // namespace RED4ext

// clang-format on
