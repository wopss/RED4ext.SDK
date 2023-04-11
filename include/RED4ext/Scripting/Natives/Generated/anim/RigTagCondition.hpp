#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IStaticCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct RigTagCondition : anim::IStaticCondition
{
    static constexpr const char* NAME = "animRigTagCondition";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 30
};
RED4EXT_ASSERT_SIZE(RigTagCondition, 0x38);
} // namespace anim
using animRigTagCondition = anim::RigTagCondition;
} // namespace RED4ext

// clang-format on
