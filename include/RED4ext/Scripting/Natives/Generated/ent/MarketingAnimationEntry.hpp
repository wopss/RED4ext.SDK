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
struct MarketingAnimationEntry
{
    static constexpr const char* NAME = "entMarketingAnimationEntry";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    float time; // 08
    float frame; // 0C
};
RED4EXT_ASSERT_SIZE(MarketingAnimationEntry, 0x10);
} // namespace ent
using entMarketingAnimationEntry = ent::MarketingAnimationEntry;
} // namespace RED4ext

// clang-format on
