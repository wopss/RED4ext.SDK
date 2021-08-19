#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct DelegateTaskRef
{
    static constexpr const char* NAME = "AIbehaviorDelegateTaskRef";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
};
RED4EXT_ASSERT_SIZE(DelegateTaskRef, 0x8);
} // namespace AI::behavior
} // namespace RED4ext
