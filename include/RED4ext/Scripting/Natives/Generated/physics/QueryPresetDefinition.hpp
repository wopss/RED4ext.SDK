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
namespace physics
{
struct QueryPresetDefinition : ISerializable
{
    static constexpr const char* NAME = "physicsQueryPresetDefinition";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    DynArray<CName> queryGroups; // 38
};
RED4EXT_ASSERT_SIZE(QueryPresetDefinition, 0x48);
} // namespace physics
using physicsQueryPresetDefinition = physics::QueryPresetDefinition;
} // namespace RED4ext

// clang-format on
