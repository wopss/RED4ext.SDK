#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DelegateTaskRef
{
    static constexpr const char* NAME = "AIbehaviorDelegateTaskRef";
    static constexpr const char* ALIAS = "AIDelegateTaskRef";

    CName name; // 00
};
RED4EXT_ASSERT_SIZE(DelegateTaskRef, 0x8);
} // namespace AI::behavior
using AIbehaviorDelegateTaskRef = AI::behavior::DelegateTaskRef;
using AIDelegateTaskRef = AI::behavior::DelegateTaskRef;
} // namespace RED4ext

// clang-format on
