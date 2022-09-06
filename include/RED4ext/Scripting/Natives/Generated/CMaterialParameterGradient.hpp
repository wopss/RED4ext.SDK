#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CGradient;

struct CMaterialParameterGradient : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterGradient";
    static constexpr const char* ALIAS = NAME;

    Ref<CGradient> gradient; // 40
};
RED4EXT_ASSERT_SIZE(CMaterialParameterGradient, 0x58);
} // namespace RED4ext

// clang-format on
