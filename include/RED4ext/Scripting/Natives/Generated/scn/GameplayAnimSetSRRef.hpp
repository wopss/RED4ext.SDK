#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn
{
struct GameplayAnimSetSRRef
{
    static constexpr const char* NAME = "scnGameplayAnimSetSRRef";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::AnimSet> asyncAnimSet; // 00
};
RED4EXT_ASSERT_SIZE(GameplayAnimSetSRRef, 0x8);
} // namespace scn
using scnGameplayAnimSetSRRef = scn::GameplayAnimSetSRRef;
} // namespace RED4ext

// clang-format on
