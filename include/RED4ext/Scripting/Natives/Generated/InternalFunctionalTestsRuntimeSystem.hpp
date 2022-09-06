#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsIRuntimeSystem.hpp>

namespace RED4ext
{
struct InternalFunctionalTestsRuntimeSystem : FunctionalTestsIRuntimeSystem
{
    static constexpr const char* NAME = "InternalFunctionalTestsRuntimeSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xF8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InternalFunctionalTestsRuntimeSystem, 0xF8);
} // namespace RED4ext

// clang-format on
