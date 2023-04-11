#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DbgOverlapBox.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficCollisionDebug : ISerializable
{
    static constexpr const char* NAME = "worldTrafficCollisionDebug";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::DbgOverlapBox> overlapBoxes; // 30
};
RED4EXT_ASSERT_SIZE(TrafficCollisionDebug, 0x40);
} // namespace world
using worldTrafficCollisionDebug = world::TrafficCollisionDebug;
} // namespace RED4ext

// clang-format on
