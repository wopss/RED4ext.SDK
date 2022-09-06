#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
struct CSkinProfile : CResource
{
    static constexpr const char* NAME = "CSkinProfile";
    static constexpr const char* ALIAS = NAME;

    float blurSize; // 40
    Color diffuse; // 44
    Color falloff; // 48
    float roughness0; // 4C
    float roughness1; // 50
    float lobeMix; // 54
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(CSkinProfile, 0x68);
} // namespace RED4ext

// clang-format on
