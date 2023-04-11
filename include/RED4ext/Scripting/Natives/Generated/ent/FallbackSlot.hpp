#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ent
{
struct FallbackSlot
{
    static constexpr const char* NAME = "entFallbackSlot";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 00
    CName boneName; // 08
};
RED4EXT_ASSERT_SIZE(FallbackSlot, 0x10);
} // namespace ent
using entFallbackSlot = ent::FallbackSlot;
} // namespace RED4ext

// clang-format on
