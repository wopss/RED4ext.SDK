#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct WrappedEntIDArray
{
    static constexpr const char* NAME = "gameWrappedEntIDArray";
    static constexpr const char* ALIAS = "WrappedEntIDArray";

    DynArray<ent::EntityID> arr; // 00
};
RED4EXT_ASSERT_SIZE(WrappedEntIDArray, 0x10);
} // namespace game
using gameWrappedEntIDArray = game::WrappedEntIDArray;
using WrappedEntIDArray = game::WrappedEntIDArray;
} // namespace RED4ext

// clang-format on
