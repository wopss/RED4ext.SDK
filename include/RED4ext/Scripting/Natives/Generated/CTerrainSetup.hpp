#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CTerrainSetup : CResource
{
    static constexpr const char* NAME = "CTerrainSetup";
    static constexpr const char* ALIAS = NAME;

    DynArray<float> tiling; // 40
    DynArray<CName> physicalMaterial; // 50
    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CTerrainSetup, 0x70);
} // namespace RED4ext

// clang-format on
