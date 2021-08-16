#pragma once

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
namespace ink { 
struct LayerDefinitionCollection
{
    static constexpr const char* NAME = "inkLayerDefinitionCollection";
    static constexpr const char* ALIAS = NAME;

    ink::MenuLayerDefinition menuLayer; // 00
    ink::MenuLayerDefinition menuLayerMP; // 68
    ink::HUDLayerDefinition hudLayer; // D0
    uint8_t unk120[0x178 - 0x120]; // 120
    ink::VideoLayerDefinition videoLayer; // 178
    ink::OffscreenLayerDefinition offscreenLayer; // 1B0
    ink::GameNotificationsLayerDefinition gameNotificationsLayer; // 1E8
    uint8_t unk238[0x2A8 - 0x238]; // 238
    ink::PhotoModeLayerDefinition photoModeLayer; // 2A8
    ink::DebugLayerDefinition debugLayer; // 328
};
RED4EXT_ASSERT_SIZE(LayerDefinitionCollection, 0x370);
} // namespace ink
} // namespace RED4ext
