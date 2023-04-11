#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MultipleParentConstraint_JsonEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct MultipleParentConstraint_JsonProperties : ISerializable
{
    static constexpr const char* NAME = "animMultipleParentConstraint_JsonProperties";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::MultipleParentConstraint_JsonEntry> parentsTransforms; // 30
    CName transformIndex; // 40
    anim::ConstraintWeightMode weightMode; // 48
    float weight; // 4C
    CName weightFloatTrack; // 50
};
RED4EXT_ASSERT_SIZE(MultipleParentConstraint_JsonProperties, 0x58);
} // namespace anim
using animMultipleParentConstraint_JsonProperties = anim::MultipleParentConstraint_JsonProperties;
} // namespace RED4ext

// clang-format on
