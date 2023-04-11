#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ent::dismemberment { struct WoundConfigContainer; }

namespace ent::dismemberment
{
struct WoundsConfigSet
{
    static constexpr const char* NAME = "entdismembermentWoundsConfigSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ent::dismemberment::WoundConfigContainer>> Configs; // 00
};
RED4EXT_ASSERT_SIZE(WoundsConfigSet, 0x10);
} // namespace ent::dismemberment
using entdismembermentWoundsConfigSet = ent::dismemberment::WoundsConfigSet;
} // namespace RED4ext

// clang-format on
