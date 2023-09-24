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
struct MultisamplingEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkMultisamplingEffect";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MultisamplingEffect, 0x50);
} // namespace ink
using inkMultisamplingEffect = ink::MultisamplingEffect;
} // namespace RED4ext

// clang-format on
