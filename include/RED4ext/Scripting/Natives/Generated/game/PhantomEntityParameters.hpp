#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PhantomEntityParametersBlendableAppearanceMatch.hpp>

namespace RED4ext
{
namespace game { 
struct PhantomEntityParameters
{
    static constexpr const char* NAME = "gamePhantomEntityParameters";
    static constexpr const char* ALIAS = NAME;

    CName teleportStartEffect; // 00
    CName teleportEndEffect; // 08
    CName spawnEffect; // 10
    CName glitchEffect; // 18
    DynArray<game::PhantomEntityParametersBlendableAppearanceMatch> blendableAppearanceMatches; // 20
};
RED4EXT_ASSERT_SIZE(PhantomEntityParameters, 0x30);
} // namespace game
} // namespace RED4ext
