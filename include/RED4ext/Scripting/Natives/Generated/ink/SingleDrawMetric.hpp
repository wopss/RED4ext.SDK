#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink
{
struct SingleDrawMetric
{
    static constexpr const char* NAME = "inkSingleDrawMetric";
    static constexpr const char* ALIAS = NAME;

    bool exeedsLimit; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    Vector2 hierarchySize; // 04
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<uint32_t> usedTextures; // 10
};
RED4EXT_ASSERT_SIZE(SingleDrawMetric, 0x20);
} // namespace ink
using inkSingleDrawMetric = ink::SingleDrawMetric;
} // namespace RED4ext

// clang-format on
