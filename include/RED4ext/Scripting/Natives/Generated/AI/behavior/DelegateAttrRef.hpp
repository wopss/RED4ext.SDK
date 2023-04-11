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
struct DelegateAttrRef
{
    static constexpr const char* NAME = "AIbehaviorDelegateAttrRef";
    static constexpr const char* ALIAS = "AIDelegateAttrRef";

    CName name; // 00
};
RED4EXT_ASSERT_SIZE(DelegateAttrRef, 0x8);
} // namespace AI::behavior
using AIbehaviorDelegateAttrRef = AI::behavior::DelegateAttrRef;
using AIDelegateAttrRef = AI::behavior::DelegateAttrRef;
} // namespace RED4ext

// clang-format on
