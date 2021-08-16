#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DistractedConditionTarget.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckDistractedReturnConditionParams
{
    static constexpr const char* NAME = "scnCheckDistractedReturnConditionParams";
    static constexpr const char* ALIAS = NAME;

    bool distracted; // 00
    scn::DistractedConditionTarget target; // 01
};
RED4EXT_ASSERT_SIZE(CheckDistractedReturnConditionParams, 0x2);
} // namespace scn
} // namespace RED4ext
