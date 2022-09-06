#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct AbsolutePathSerializable
{
    static constexpr const char* NAME = "AbsolutePathSerializable";
    static constexpr const char* ALIAS = NAME;

    CString Path; // 00
};
RED4EXT_ASSERT_SIZE(AbsolutePathSerializable, 0x20);
} // namespace RED4ext

// clang-format on
