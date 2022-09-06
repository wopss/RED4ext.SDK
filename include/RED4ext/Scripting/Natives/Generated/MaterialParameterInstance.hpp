#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct MaterialParameterInstance
{
    static constexpr const char* NAME = "MaterialParameterInstance";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Variant data; // 08
};
RED4EXT_ASSERT_SIZE(MaterialParameterInstance, 0x20);
} // namespace RED4ext

// clang-format on
