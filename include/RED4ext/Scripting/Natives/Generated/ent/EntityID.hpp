#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent { 
struct EntityID
{
    static constexpr const char* NAME = "entEntityID";
    static constexpr const char* ALIAS = "EntityID";

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(EntityID, 0x8);
} // namespace ent
using EntityID = ent::EntityID;
} // namespace RED4ext
