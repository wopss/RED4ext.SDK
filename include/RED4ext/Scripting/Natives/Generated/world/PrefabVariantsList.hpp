#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct PrefabVariantsList : ISerializable
{
    static constexpr const char* NAME = "worldPrefabVariantsList";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
    DynArray<CName> activeVariants; // 48
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PrefabVariantsList, 0x68);
} // namespace world
using worldPrefabVariantsList = world::PrefabVariantsList;
} // namespace RED4ext

// clang-format on
