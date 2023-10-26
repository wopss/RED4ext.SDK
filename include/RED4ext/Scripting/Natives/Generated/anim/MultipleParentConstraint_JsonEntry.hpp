#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) MultipleParentConstraint_JsonEntry
{
    static constexpr const char* NAME = "animMultipleParentConstraint_JsonEntry";
    static constexpr const char* ALIAS = NAME;

    CName parentTransform; // 00
    anim::ConstraintWeightMode parentWeightMode; // 08
    float parentStaticWeight; // 0C
    CName parentTrackWeight; // 10
    bool useComplementWeight; // 18
    bool useOffset; // 19
    uint8_t unk1A[0x20 - 0x1A]; // 1A
    QsTransform offset; // 20
};
RED4EXT_ASSERT_SIZE(MultipleParentConstraint_JsonEntry, 0x50);
} // namespace anim
using animMultipleParentConstraint_JsonEntry = anim::MultipleParentConstraint_JsonEntry;
} // namespace RED4ext

// clang-format on
