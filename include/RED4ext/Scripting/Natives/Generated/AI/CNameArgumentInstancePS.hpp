#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentInstancePS.hpp>

namespace RED4ext
{
namespace AI
{
struct CNameArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AICNameArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    CName value; // 38
};
RED4EXT_ASSERT_SIZE(CNameArgumentInstancePS, 0x40);
} // namespace AI
using AICNameArgumentInstancePS = AI::CNameArgumentInstancePS;
} // namespace RED4ext

// clang-format on
