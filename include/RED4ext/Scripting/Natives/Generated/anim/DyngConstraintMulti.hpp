#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IDyngConstraint.hpp>

namespace RED4ext
{
namespace anim { struct IDyngConstraint; }

namespace anim
{
struct DyngConstraintMulti : anim::IDyngConstraint
{
    static constexpr const char* NAME = "animDyngConstraintMulti";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::IDyngConstraint>> innerConstraints; // 38
};
RED4EXT_ASSERT_SIZE(DyngConstraintMulti, 0x48);
} // namespace anim
using animDyngConstraintMulti = anim::DyngConstraintMulti;
} // namespace RED4ext

// clang-format on
