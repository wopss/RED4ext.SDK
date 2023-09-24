#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/BendingParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/CollarAreaParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/HiddenTrianglesRemovalParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/SmoothingParams.hpp>

namespace RED4ext
{
namespace garment
{
struct GarmentLayerParams : CResource
{
    static constexpr const char* NAME = "garmentGarmentLayerParams";
    static constexpr const char* ALIAS = NAME;

    garment::BendingParams bending; // 40
    garment::SmoothingParams smoothing; // 44
    garment::CollarAreaParams collarArea; // 58
    garment::HiddenTrianglesRemovalParams hiddenTrianglesRemoval; // 74
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(GarmentLayerParams, 0x88);
} // namespace garment
using garmentGarmentLayerParams = garment::GarmentLayerParams;
} // namespace RED4ext

// clang-format on
