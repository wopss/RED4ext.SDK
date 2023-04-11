#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct IMarker : ISerializable
{
    static constexpr const char* NAME = "worldIMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMarker, 0x30);
} // namespace world
using worldIMarker = world::IMarker;
} // namespace RED4ext

// clang-format on
