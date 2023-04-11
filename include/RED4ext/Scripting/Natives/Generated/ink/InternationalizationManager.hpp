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
struct InternationalizationManager : ISerializable
{
    static constexpr const char* NAME = "inkInternationalizationManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x88 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(InternationalizationManager, 0x88);
} // namespace ink
using inkInternationalizationManager = ink::InternationalizationManager;
} // namespace RED4ext

// clang-format on
