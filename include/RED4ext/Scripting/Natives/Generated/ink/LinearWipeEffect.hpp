#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct LinearWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkLinearWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 50
    float transition; // 54
};
RED4EXT_ASSERT_SIZE(LinearWipeEffect, 0x58);
} // namespace ink
using inkLinearWipeEffect = ink::LinearWipeEffect;
} // namespace RED4ext

// clang-format on
