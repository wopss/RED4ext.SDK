#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/rend/IRenderTextureBlob.hpp>

namespace RED4ext
{
namespace rend { 
struct RenderTextureBlobStreamable : rend::IRenderTextureBlob
{
    static constexpr const char* NAME = "rendRenderTextureBlobStreamable";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RenderTextureBlobStreamable, 0xD0);
} // namespace rend
} // namespace RED4ext
