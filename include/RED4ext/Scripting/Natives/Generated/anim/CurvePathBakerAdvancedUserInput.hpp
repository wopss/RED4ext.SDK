#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CurvePathPartInput.hpp>

namespace RED4ext
{
namespace anim
{
struct CurvePathBakerAdvancedUserInput
{
    static constexpr const char* NAME = "animCurvePathBakerAdvancedUserInput";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<anim::CurvePathPartInput, 3> partsInputs; // 00
};
RED4EXT_ASSERT_SIZE(CurvePathBakerAdvancedUserInput, 0x80);
} // namespace anim
using animCurvePathBakerAdvancedUserInput = anim::CurvePathBakerAdvancedUserInput;
} // namespace RED4ext

// clang-format on
