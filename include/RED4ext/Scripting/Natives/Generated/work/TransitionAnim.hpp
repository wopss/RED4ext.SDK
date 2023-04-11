#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace work
{
struct TransitionAnim
{
    static constexpr const char* NAME = "workTransitionAnim";
    static constexpr const char* ALIAS = NAME;

    CName idleA; // 00
    CName idleB; // 08
    CName transitionAtoB; // 10
    CName transitionBtoA; // 18
};
RED4EXT_ASSERT_SIZE(TransitionAnim, 0x20);
} // namespace work
using workTransitionAnim = work::TransitionAnim;
} // namespace RED4ext

// clang-format on
