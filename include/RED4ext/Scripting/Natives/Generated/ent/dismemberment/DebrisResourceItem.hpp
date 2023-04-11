#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CMesh;
namespace anim { struct Rig; }

namespace ent::dismemberment
{
struct DebrisResourceItem
{
    static constexpr const char* NAME = "entdismembermentDebrisResourceItem";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::Rig> rig; // 00
    Ref<CMesh> mesh; // 18
};
RED4EXT_ASSERT_SIZE(DebrisResourceItem, 0x30);
} // namespace ent::dismemberment
using entdismembermentDebrisResourceItem = ent::dismemberment::DebrisResourceItem;
} // namespace RED4ext

// clang-format on
