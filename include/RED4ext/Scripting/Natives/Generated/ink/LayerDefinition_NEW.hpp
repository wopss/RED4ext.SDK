#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ELayerLoadPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ELayerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDrawingPolicy.hpp>

namespace RED4ext
{
namespace ink
{
struct LayerDefinition_NEW
{
    static constexpr const char* NAME = "inkLayerDefinition_NEW";
    static constexpr const char* ALIAS = NAME;

    ink::ELayerType layerType; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    ink::LayerDrawingPolicy drawingPolicy; // 04
    ink::ELayerLoadPriority loadPriority; // 08
    bool enabled; // 09
    bool isPermanent; // 0A
    bool useGlobalStyleTheme; // 0B
    bool isAffectedByFadeout; // 0C
    bool useGameInput; // 0D
    uint8_t unk0E[0x10 - 0xE]; // E
    CName inputContext; // 10
    CName name; // 18
};
RED4EXT_ASSERT_SIZE(LayerDefinition_NEW, 0x20);
} // namespace ink
using inkLayerDefinition_NEW = ink::LayerDefinition_NEW;
} // namespace RED4ext

// clang-format on
