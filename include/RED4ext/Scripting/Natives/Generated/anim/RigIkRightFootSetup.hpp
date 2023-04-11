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
struct RigIkRightFootSetup : anim::RigIk2Setup
{
    static constexpr const char* NAME = "animRigIkRightFootSetup";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RigIkRightFootSetup, 0x60);
} // namespace anim
using animRigIkRightFootSetup = anim::RigIkRightFootSetup;
} // namespace RED4ext

// clang-format on
