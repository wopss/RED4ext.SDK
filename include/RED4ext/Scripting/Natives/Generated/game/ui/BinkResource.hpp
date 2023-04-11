#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct Bink;

namespace game::ui
{
struct BinkResource
{
    static constexpr const char* NAME = "gameuiBinkResource";
    static constexpr const char* ALIAS = "BinkResource";

    RaRef<Bink> video; // 00
};
RED4EXT_ASSERT_SIZE(BinkResource, 0x8);
} // namespace game::ui
using gameuiBinkResource = game::ui::BinkResource;
using BinkResource = game::ui::BinkResource;
} // namespace RED4ext

// clang-format on
