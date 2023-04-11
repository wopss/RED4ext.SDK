#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world { struct FoliageRawItem; }

namespace world
{
struct FoliageRawData : ISerializable
{
    static constexpr const char* NAME = "worldFoliageRawData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<world::FoliageRawItem>> items; // 30
    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FoliageRawData, 0x50);
} // namespace world
using worldFoliageRawData = world::FoliageRawData;
} // namespace RED4ext

// clang-format on
