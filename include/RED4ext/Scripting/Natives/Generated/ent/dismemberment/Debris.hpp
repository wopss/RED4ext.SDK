#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/DebrisResourceItem.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct Debris : CResource
{
    static constexpr const char* NAME = "entdismembermentDebris";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::dismemberment::DebrisResourceItem> items; // 40
};
RED4EXT_ASSERT_SIZE(Debris, 0x50);
} // namespace ent::dismemberment
using entdismembermentDebris = ent::dismemberment::Debris;
} // namespace RED4ext

// clang-format on
