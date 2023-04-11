#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/entEntityID.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ent::EntityID, 0x8);
using entEntityID = ent::EntityID;
using EntityID = ent::EntityID;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityID
{
    static constexpr const char* NAME = "entEntityID";
    static constexpr const char* ALIAS = "EntityID";

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(EntityID, 0x8);
} // namespace ent
using entEntityID = ent::EntityID;
using EntityID = ent::EntityID;
} // namespace RED4ext
*/

// clang-format on
