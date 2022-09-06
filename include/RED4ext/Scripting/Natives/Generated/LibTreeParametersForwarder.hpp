#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
struct LibTreeParametersForwarder
{
    static constexpr const char* NAME = "LibTreeParametersForwarder";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> overrides; // 00
};
RED4EXT_ASSERT_SIZE(LibTreeParametersForwarder, 0x10);
} // namespace RED4ext

// clang-format on
