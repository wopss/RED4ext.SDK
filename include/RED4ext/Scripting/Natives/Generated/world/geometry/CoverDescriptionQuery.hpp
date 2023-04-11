#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world::geometry
{
struct CoverDescriptionQuery : ISerializable
{
    static constexpr const char* NAME = "worldgeometryCoverDescriptionQuery";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x98 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(CoverDescriptionQuery, 0x98);
} // namespace world::geometry
using worldgeometryCoverDescriptionQuery = world::geometry::CoverDescriptionQuery;
} // namespace RED4ext

// clang-format on
