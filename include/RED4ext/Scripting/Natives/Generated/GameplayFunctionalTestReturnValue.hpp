#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct GameplayFunctionalTestReturnValue
{
    static constexpr const char* NAME = "GameplayFunctionalTestReturnValue";
    static constexpr const char* ALIAS = NAME;

    CString value; // 00
    CString errorInfo; // 20
};
RED4EXT_ASSERT_SIZE(GameplayFunctionalTestReturnValue, 0x40);
} // namespace RED4ext

// clang-format on
