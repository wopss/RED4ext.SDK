#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapePreset.hpp>

namespace RED4ext
{
namespace ink
{
struct ShapePresetWraper : ISerializable
{
    static constexpr const char* NAME = "inkShapePresetWraper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
    ink::ShapePreset shapePreset; // 60
};
RED4EXT_ASSERT_SIZE(ShapePresetWraper, 0x78);
} // namespace ink
using inkShapePresetWraper = ink::ShapePresetWraper;
} // namespace RED4ext

// clang-format on
