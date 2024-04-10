#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkHUDLayer.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::HUDLayer, 0x200);
using inkHUDLayer = ink::HUDLayer;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) HUDLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkHUDLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x200 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(HUDLayer, 0x200);
} // namespace ink
using inkHUDLayer = ink::HUDLayer;
} // namespace RED4ext
*/

// clang-format on
