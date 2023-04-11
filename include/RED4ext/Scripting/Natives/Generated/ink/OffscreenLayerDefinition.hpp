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
struct OffscreenLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkOffscreenLayerDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OffscreenLayerDefinition, 0x38);
} // namespace ink
using inkOffscreenLayerDefinition = ink::OffscreenLayerDefinition;
} // namespace RED4ext

// clang-format on
