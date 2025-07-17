#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleVisualCustomizationPreviewGlowSetup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleVisualCustomizationPreviewGlowSetup_Record";
    static constexpr const char* ALIAS = "VehicleVisualCustomizationPreviewGlowSetup_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleVisualCustomizationPreviewGlowSetup_Record, 0x78);
} // namespace game::data
using gamedataVehicleVisualCustomizationPreviewGlowSetup_Record = game::data::VehicleVisualCustomizationPreviewGlowSetup_Record;
using VehicleVisualCustomizationPreviewGlowSetup_Record = game::data::VehicleVisualCustomizationPreviewGlowSetup_Record;
} // namespace RED4ext

// clang-format on
