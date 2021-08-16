#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace scn { 
struct AnimSetAnimNames
{
    static constexpr const char* NAME = "scnAnimSetAnimNames";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> animationNames; // 00
};
RED4EXT_ASSERT_SIZE(AnimSetAnimNames, 0x10);
} // namespace scn
} // namespace RED4ext
