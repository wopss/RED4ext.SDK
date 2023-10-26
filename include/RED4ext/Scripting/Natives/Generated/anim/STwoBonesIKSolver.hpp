#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) STwoBonesIKSolver
{
    static constexpr const char* NAME = "animSTwoBonesIKSolver";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x100 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(STwoBonesIKSolver, 0x100);
} // namespace anim
using animSTwoBonesIKSolver = anim::STwoBonesIKSolver;
} // namespace RED4ext

// clang-format on
