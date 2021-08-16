#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/ink/SingleDrawMetric.hpp>

namespace RED4ext
{
namespace ink { 
struct WindowDrawMetrics
{
    static constexpr const char* NAME = "inkWindowDrawMetrics";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> allTextures; // 00
    DynArray<Vector2> textureSizeTypes; // 10
    DynArray<uint32_t> textureTypeTotal; // 20
    DynArray<uint32_t> maxUsedTextureTypes; // 30
    DynArray<ink::SingleDrawMetric> drawMetrics; // 40
};
RED4EXT_ASSERT_SIZE(WindowDrawMetrics, 0x50);
} // namespace ink
} // namespace RED4ext
