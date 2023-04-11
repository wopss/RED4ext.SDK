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
struct RenderTextureBlobXboxOne : rend::IRenderTextureBlob
{
    static constexpr const char* NAME = "rendRenderTextureBlobXboxOne";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RenderTextureBlobXboxOne, 0xD0);
} // namespace rend
using rendRenderTextureBlobXboxOne = rend::RenderTextureBlobXboxOne;
} // namespace RED4ext

// clang-format on
