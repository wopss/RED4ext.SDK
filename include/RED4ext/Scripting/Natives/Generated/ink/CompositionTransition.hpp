#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompositionInterpolator.hpp>

namespace RED4ext
{
namespace ink
{
struct CompositionTransition
{
    static constexpr const char* NAME = "inkCompositionTransition";
    static constexpr const char* ALIAS = NAME;

    CName targetState; // 00
    DynArray<ink::CompositionInterpolator> interpolators; // 08
};
RED4EXT_ASSERT_SIZE(CompositionTransition, 0x18);
} // namespace ink
using inkCompositionTransition = ink::CompositionTransition;
} // namespace RED4ext

// clang-format on
