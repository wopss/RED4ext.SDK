#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigIk2Setup.hpp>

namespace RED4ext
{
namespace anim
{
struct RigIkLeftFootSetup : anim::RigIk2Setup
{
    static constexpr const char* NAME = "animRigIkLeftFootSetup";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RigIkLeftFootSetup, 0x60);
} // namespace anim
using animRigIkLeftFootSetup = anim::RigIkLeftFootSetup;
} // namespace RED4ext

// clang-format on
