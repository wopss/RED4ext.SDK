#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { struct EffectSet; }

namespace game
{
struct EffectRef
{
    static constexpr const char* NAME = "gameEffectRef";
    static constexpr const char* ALIAS = "EffectRef";

    uint8_t unk00[0x8 - 0x0]; // 0
    Ref<game::EffectSet> set; // 08
    CName tag; // 20
};
RED4EXT_ASSERT_SIZE(EffectRef, 0x28);
} // namespace game
using gameEffectRef = game::EffectRef;
using EffectRef = game::EffectRef;
} // namespace RED4ext

// clang-format on
