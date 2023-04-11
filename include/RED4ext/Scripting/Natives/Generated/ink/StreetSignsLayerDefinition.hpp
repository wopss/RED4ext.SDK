#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct StreetSignsLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkStreetSignsLayerDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StreetSignsLayerDefinition, 0x38);
} // namespace ink
using inkStreetSignsLayerDefinition = ink::StreetSignsLayerDefinition;
} // namespace RED4ext

// clang-format on
