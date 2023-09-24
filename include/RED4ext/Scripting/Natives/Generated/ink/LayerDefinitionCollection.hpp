#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DebugLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GameNotificationsLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/HUDLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/OffscreenLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/PhotoModeLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VideoLayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct LayerDefinitionCollection
{
    static constexpr const char* NAME = "inkLayerDefinitionCollection";
    static constexpr const char* ALIAS = NAME;

    ink::MenuLayerDefinition menuLayer; // 00
    ink::MenuLayerDefinition menuLayerMP; // 68
    ink::HUDLayerDefinition hudLayer; // D0
    uint8_t unk120[0x180 - 0x120]; // 120
    ink::VideoLayerDefinition videoLayer; // 180
    ink::OffscreenLayerDefinition offscreenLayer; // 1B8
    ink::GameNotificationsLayerDefinition gameNotificationsLayer; // 1F0
    uint8_t unk240[0x2B0 - 0x240]; // 240
    ink::PhotoModeLayerDefinition photoModeLayer; // 2B0
    ink::DebugLayerDefinition debugLayer; // 330
};
RED4EXT_ASSERT_SIZE(LayerDefinitionCollection, 0x378);
} // namespace ink
using inkLayerDefinitionCollection = ink::LayerDefinitionCollection;
} // namespace RED4ext

// clang-format on
