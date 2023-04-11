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
struct CustomFilterData : ISerializable
{
    static constexpr const char* NAME = "physicsCustomFilterData";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> collisionType; // 30
    DynArray<CName> collideWith; // 40
    DynArray<CName> queryDetect; // 50
};
RED4EXT_ASSERT_SIZE(CustomFilterData, 0x60);
} // namespace physics
using physicsCustomFilterData = physics::CustomFilterData;
} // namespace RED4ext

// clang-format on
