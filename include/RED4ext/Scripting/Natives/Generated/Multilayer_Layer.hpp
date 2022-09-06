#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CBitmapTexture;
struct Multilayer_LayerTemplate;

struct Multilayer_Layer
{
    static constexpr const char* NAME = "Multilayer_Layer";
    static constexpr const char* ALIAS = NAME;

    float matTile; // 00
    float mbTile; // 04
    Ref<CBitmapTexture> microblend; // 08
    float microblendContrast; // 20
    float microblendNormalStrength; // 24
    float microblendOffsetU; // 28
    float microblendOffsetV; // 2C
    float opacity; // 30
    float offsetU; // 34
    float offsetV; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    Ref<Multilayer_LayerTemplate> material; // 40
    CName colorScale; // 58
    CName normalStrength; // 60
    CName roughLevelsIn; // 68
    CName roughLevelsOut; // 70
    CName metalLevelsIn; // 78
    CName metalLevelsOut; // 80
    CName overrides; // 88
};
RED4EXT_ASSERT_SIZE(Multilayer_Layer, 0x90);
} // namespace RED4ext

// clang-format on
