#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMultilayerMaskBlob.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderMultilayerMaskBlobEmporium : rend::RenderMultilayerMaskBlob
{
    static constexpr const char* NAME = "rendRenderMultilayerMaskBlobEmporium";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RenderMultilayerMaskBlobEmporium, 0x108);
} // namespace rend
using rendRenderMultilayerMaskBlobEmporium = rend::RenderMultilayerMaskBlobEmporium;
} // namespace RED4ext

// clang-format on
