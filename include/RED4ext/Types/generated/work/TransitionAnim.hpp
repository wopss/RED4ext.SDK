#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace work { 
struct TransitionAnim
{
    static constexpr const char* NAME = "workTransitionAnim";
    static constexpr const char* ALIAS = NAME;

    CName fromIdle; // 00
    CName toIdle; // 08
    CName transitionAnim; // 10
};
RED4EXT_ASSERT_SIZE(TransitionAnim, 0x18);
} // namespace work
} // namespace RED4ext
