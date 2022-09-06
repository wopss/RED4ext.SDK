#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialLayerDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/MicroblendDef.hpp>

namespace RED4ext
{
struct CMaterialLayerLibrary : CResource
{
    static constexpr const char* NAME = "CMaterialLayerLibrary";
    static constexpr const char* ALIAS = NAME;

    float uvTiling; // 40
    float mbTiling; // 44
    float microblendContrast; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    uint32_t paletteColorIndex; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    DynArray<MaterialLayerDef> layers; // 58
    DynArray<MicroblendDef> microblends; // 68
};
RED4EXT_ASSERT_SIZE(CMaterialLayerLibrary, 0x78);
} // namespace RED4ext

// clang-format on
