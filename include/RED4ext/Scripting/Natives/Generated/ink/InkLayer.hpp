#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink
{
struct InkLayer : ISerializable
{
    static constexpr const char* NAME = "inkInkLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x1D0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(InkLayer, 0x1D0);
} // namespace ink
using inkInkLayer = ink::InkLayer;
} // namespace RED4ext

// clang-format on
