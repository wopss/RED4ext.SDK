#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition_NEW.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerSystemConnection.hpp>

namespace RED4ext
{
namespace ink
{
struct LayerDefinitionsSet
{
    static constexpr const char* NAME = "inkLayerDefinitionsSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::LayerDefinition_NEW> layersDefinitions; // 00
    DynArray<ink::LayerSystemConnection> layersSystemConnections; // 10
};
RED4EXT_ASSERT_SIZE(LayerDefinitionsSet, 0x20);
} // namespace ink
using inkLayerDefinitionsSet = ink::LayerDefinitionsSet;
} // namespace RED4ext

// clang-format on
