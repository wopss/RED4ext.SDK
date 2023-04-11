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
struct CoverDescriptionResult : ISerializable
{
    static constexpr const char* NAME = "worldgeometryCoverDescriptionResult";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xF0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(CoverDescriptionResult, 0xF0);
} // namespace world::geometry
using worldgeometryCoverDescriptionResult = world::geometry::CoverDescriptionResult;
} // namespace RED4ext

// clang-format on
