#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/OpacityMicromapChunk.hpp>

namespace RED4ext
{
namespace rend
{
struct OpacityMicromapDatabase
{
    static constexpr const char* NAME = "rendOpacityMicromapDatabase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x60 - 0x0]; // 0
    DynArray<rend::OpacityMicromapChunk> ommChunks; // 60
    DynArray<uint8_t> dataBuffer; // 70
};
RED4EXT_ASSERT_SIZE(OpacityMicromapDatabase, 0x80);
} // namespace rend
using rendOpacityMicromapDatabase = rend::OpacityMicromapDatabase;
} // namespace RED4ext

// clang-format on
