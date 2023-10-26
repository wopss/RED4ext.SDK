#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sphere.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningTooltipElementDef.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) ScanningComponent : game::Component
{
    static constexpr const char* NAME = "gameScanningComponent";
    static constexpr const char* ALIAS = "ScanningComponent";

    bool cpoEnableMultiplePlayersScanningModifier; // A8
    bool autoGenerateBoundingSphere; // A9
    bool ignoresScanningDistanceLimit; // AA
    uint8_t unkAB[0xB0 - 0xAB]; // AB
    float timeNeeded; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
    Sphere boundingSphere; // C0
    uint8_t unkD0[0xD8 - 0xD0]; // D0
    DynArray<game::ScanningTooltipElementDef> scannableData; // D8
    uint8_t unkE8[0x110 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(ScanningComponent, 0x110);
} // namespace game
using gameScanningComponent = game::ScanningComponent;
using ScanningComponent = game::ScanningComponent;
} // namespace RED4ext

// clang-format on
