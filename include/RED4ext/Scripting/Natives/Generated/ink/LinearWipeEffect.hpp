#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct LinearWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkLinearWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 68
    float transition; // 6C
};
RED4EXT_ASSERT_SIZE(LinearWipeEffect, 0x70);
} // namespace ink
} // namespace RED4ext
