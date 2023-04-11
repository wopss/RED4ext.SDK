#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ent
{
struct MorphTargetWeightEntry
{
    static constexpr const char* NAME = "entMorphTargetWeightEntry";
    static constexpr const char* ALIAS = NAME;

    CName targetName; // 00
    CName regionName; // 08
    float weight; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(MorphTargetWeightEntry, 0x18);
} // namespace ent
using entMorphTargetWeightEntry = ent::MorphTargetWeightEntry;
} // namespace RED4ext

// clang-format on
