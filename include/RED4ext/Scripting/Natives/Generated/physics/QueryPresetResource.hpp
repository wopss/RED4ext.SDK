#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPresetDefinition.hpp>

namespace RED4ext
{
namespace physics
{
struct QueryPresetResource : ISerializable
{
    static constexpr const char* NAME = "physicsQueryPresetResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::QueryPresetDefinition> presets; // 30
};
RED4EXT_ASSERT_SIZE(QueryPresetResource, 0x40);
} // namespace physics
using physicsQueryPresetResource = physics::QueryPresetResource;
} // namespace RED4ext

// clang-format on
