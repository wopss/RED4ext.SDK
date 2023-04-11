#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game
{
struct PhantomEntityParametersBlendableAppearanceMatch
{
    static constexpr const char* NAME = "gamePhantomEntityParametersBlendableAppearanceMatch";
    static constexpr const char* ALIAS = NAME;

    CName blendable; // 00
    CName notBlendable; // 08
};
RED4EXT_ASSERT_SIZE(PhantomEntityParametersBlendableAppearanceMatch, 0x10);
} // namespace game
using gamePhantomEntityParametersBlendableAppearanceMatch = game::PhantomEntityParametersBlendableAppearanceMatch;
} // namespace RED4ext

// clang-format on
