#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CFoliageProfile;

struct CMaterialParameterFoliageParameters : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterFoliageParameters";
    static constexpr const char* ALIAS = NAME;

    Ref<CFoliageProfile> foliageProfile; // 40
};
RED4EXT_ASSERT_SIZE(CMaterialParameterFoliageParameters, 0x58);
} // namespace RED4ext

// clang-format on
