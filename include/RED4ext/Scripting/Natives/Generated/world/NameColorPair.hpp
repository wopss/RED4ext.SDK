#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace world
{
struct NameColorPair
{
    static constexpr const char* NAME = "worldNameColorPair";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    Color color; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(NameColorPair, 0x28);
} // namespace world
using worldNameColorPair = world::NameColorPair;
} // namespace RED4ext

// clang-format on
