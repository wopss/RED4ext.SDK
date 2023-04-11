#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ink { struct ILayerSystemData; }

namespace ink
{
struct LayerSystemConnection
{
    static constexpr const char* NAME = "inkLayerSystemConnection";
    static constexpr const char* ALIAS = NAME;

    CName layerName; // 00
    Handle<ink::ILayerSystemData> system; // 08
};
RED4EXT_ASSERT_SIZE(LayerSystemConnection, 0x18);
} // namespace ink
using inkLayerSystemConnection = ink::LayerSystemConnection;
} // namespace RED4ext

// clang-format on
