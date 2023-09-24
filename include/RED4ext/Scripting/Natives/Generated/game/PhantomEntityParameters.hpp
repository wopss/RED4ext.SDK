#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PhantomEntityParametersBlendableAppearanceMatch.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PhantomEntityState.hpp>

namespace RED4ext
{
namespace game
{
struct PhantomEntityParameters
{
    static constexpr const char* NAME = "gamePhantomEntityParameters";
    static constexpr const char* ALIAS = NAME;

    CName teleportStartEffect; // 00
    CName teleportEndEffect; // 08
    CName spawnEffect; // 10
    CName glitchEffect; // 18
    DynArray<game::PhantomEntityState> phantomVisibleStates; // 20
    DynArray<game::PhantomEntityParametersBlendableAppearanceMatch> blendableAppearanceMatches; // 30
};
RED4EXT_ASSERT_SIZE(PhantomEntityParameters, 0x40);
} // namespace game
using gamePhantomEntityParameters = game::PhantomEntityParameters;
} // namespace RED4ext

// clang-format on
