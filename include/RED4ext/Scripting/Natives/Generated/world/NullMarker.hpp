#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace world
{
struct NullMarker : world::IMarker
{
    static constexpr const char* NAME = "worldNullMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NullMarker, 0x30);
} // namespace world
using worldNullMarker = world::NullMarker;
} // namespace RED4ext

// clang-format on
