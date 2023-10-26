#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMeshBlobHeader.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) RenderMeshBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderMeshBlob";
    static constexpr const char* ALIAS = NAME;

    rend::RenderMeshBlobHeader header; // 30
    DataBuffer renderBuffer; // 110
    uint8_t unk138[0x140 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(RenderMeshBlob, 0x140);
} // namespace rend
using rendRenderMeshBlob = rend::RenderMeshBlob;
} // namespace RED4ext

// clang-format on
