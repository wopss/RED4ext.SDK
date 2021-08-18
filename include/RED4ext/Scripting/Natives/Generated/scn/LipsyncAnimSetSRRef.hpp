#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn { 
struct LipsyncAnimSetSRRef
{
    static constexpr const char* NAME = "scnLipsyncAnimSetSRRef";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::AnimSet> lipsyncAnimSet; // 00
    RaRef<anim::AnimSet> asyncRefLipsyncAnimSet; // 18
};
RED4EXT_ASSERT_SIZE(LipsyncAnimSetSRRef, 0x20);
} // namespace scn
} // namespace RED4ext
