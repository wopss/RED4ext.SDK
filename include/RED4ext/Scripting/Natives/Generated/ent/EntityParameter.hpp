#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityParameter : ISerializable
{
    static constexpr const char* NAME = "entEntityParameter";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EntityParameter, 0x30);
} // namespace ent
using entEntityParameter = ent::EntityParameter;
} // namespace RED4ext

// clang-format on
