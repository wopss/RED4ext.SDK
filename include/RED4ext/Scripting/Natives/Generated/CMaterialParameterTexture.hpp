#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct ITexture;

struct CMaterialParameterTexture : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterTexture";
    static constexpr const char* ALIAS = NAME;

    Ref<ITexture> texture; // 40
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(CMaterialParameterTexture, 0x60);
} // namespace RED4ext

// clang-format on
