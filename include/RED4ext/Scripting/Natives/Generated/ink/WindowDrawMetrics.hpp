#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SingleDrawMetric.hpp>

namespace RED4ext
{
namespace ink
{
struct WindowDrawMetrics
{
    static constexpr const char* NAME = "inkWindowDrawMetrics";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> allTextures; // 00
    DynArray<Vector2> textureSizeTypes; // 10
    DynArray<uint32_t> textureTypeTotal; // 20
    DynArray<uint32_t> maxUsedTextureTypes; // 30
    DynArray<ink::SingleDrawMetric> drawMetrics; // 40
    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(WindowDrawMetrics, 0x68);
} // namespace ink
using inkWindowDrawMetrics = ink::WindowDrawMetrics;
} // namespace RED4ext

// clang-format on
