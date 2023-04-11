#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LoadingLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SystemNotificationsLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WaitingSignLayerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WatermarksLayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct PermanentLayerDefinitionCollection
{
    static constexpr const char* NAME = "inkPermanentLayerDefinitionCollection";
    static constexpr const char* ALIAS = NAME;

    ink::LoadingLayerDefinition loadingLayer; // 00
    ink::WatermarksLayerDefinition watermarksLayer; // 58
    ink::SystemNotificationsLayerDefinition sysNotificationsLayer; // 90
    ink::WaitingSignLayerDefinition waitingSignLayerDefinition; // E0
};
RED4EXT_ASSERT_SIZE(PermanentLayerDefinitionCollection, 0x148);
} // namespace ink
using inkPermanentLayerDefinitionCollection = ink::PermanentLayerDefinitionCollection;
} // namespace RED4ext

// clang-format on
