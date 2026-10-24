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
struct WorldmapStereoEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkWorldmapStereoEffect";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WorldmapStereoEffect, 0x60);
} // namespace ink
using inkWorldmapStereoEffect = ink::WorldmapStereoEffect;
} // namespace RED4ext

// clang-format on
