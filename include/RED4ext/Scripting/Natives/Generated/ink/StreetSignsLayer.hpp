#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WorldFluffLayer.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) StreetSignsLayer : ink::WorldFluffLayer
{
    static constexpr const char* NAME = "inkStreetSignsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x330 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(StreetSignsLayer, 0x330);
} // namespace ink
using inkStreetSignsLayer = ink::StreetSignsLayer;
} // namespace RED4ext

// clang-format on
