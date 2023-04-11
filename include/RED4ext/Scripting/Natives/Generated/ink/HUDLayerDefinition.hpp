#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { struct HudEntriesResource; }

namespace ink
{
struct HUDLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkHUDLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::HudEntriesResource> entriesResource; // 38
};
RED4EXT_ASSERT_SIZE(HUDLayerDefinition, 0x50);
} // namespace ink
using inkHUDLayerDefinition = ink::HUDLayerDefinition;
} // namespace RED4ext

// clang-format on
