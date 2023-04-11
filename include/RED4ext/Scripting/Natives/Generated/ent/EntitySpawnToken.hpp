#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ent
{
struct EntitySpawnToken : IScriptable
{
    static constexpr const char* NAME = "entEntitySpawnToken";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EntitySpawnToken, 0x40);
} // namespace ent
using entEntitySpawnToken = ent::EntitySpawnToken;
} // namespace RED4ext

// clang-format on
