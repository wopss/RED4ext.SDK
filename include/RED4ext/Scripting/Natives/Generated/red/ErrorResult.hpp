#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace red
{
struct ErrorResult
{
    static constexpr const char* NAME = "redErrorResult";
    static constexpr const char* ALIAS = NAME;

    CString message; // 00
    Variant userData; // 20
};
RED4EXT_ASSERT_SIZE(ErrorResult, 0x38);
} // namespace red
using redErrorResult = red::ErrorResult;
} // namespace RED4ext

// clang-format on
