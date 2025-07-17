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
struct VehicleVisualCustomizationPreviewSetup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleVisualCustomizationPreviewSetup_Record";
    static constexpr const char* ALIAS = "VehicleVisualCustomizationPreviewSetup_Record";

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleVisualCustomizationPreviewSetup_Record, 0xF0);
} // namespace game::data
using gamedataVehicleVisualCustomizationPreviewSetup_Record = game::data::VehicleVisualCustomizationPreviewSetup_Record;
using VehicleVisualCustomizationPreviewSetup_Record = game::data::VehicleVisualCustomizationPreviewSetup_Record;
} // namespace RED4ext

// clang-format on
