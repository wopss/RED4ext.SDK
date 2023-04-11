#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/IRenderTextureBlob.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobPS4 : rend::IRenderTextureBlob
{
    static constexpr const char* NAME = "rendRenderTextureBlobPS4";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RenderTextureBlobPS4, 0xD0);
} // namespace rend
using rendRenderTextureBlobPS4 = rend::RenderTextureBlobPS4;
} // namespace RED4ext

// clang-format on
