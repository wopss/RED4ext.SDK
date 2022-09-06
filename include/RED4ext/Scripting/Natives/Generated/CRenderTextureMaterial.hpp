#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IDynamicTextureGenerator.hpp>

namespace RED4ext
{
struct CRenderTextureMaterial : IDynamicTextureGenerator
{
    static constexpr const char* NAME = "CRenderTextureMaterial";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(CRenderTextureMaterial, 0x50);
} // namespace RED4ext

// clang-format on
