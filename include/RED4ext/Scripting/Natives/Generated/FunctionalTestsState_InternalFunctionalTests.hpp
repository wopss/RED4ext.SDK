#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
struct FunctionalTestsState_InternalFunctionalTests : gsm::State
{
    static constexpr const char* NAME = "FunctionalTestsState_InternalFunctionalTests";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0x218 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(FunctionalTestsState_InternalFunctionalTests, 0x218);
} // namespace RED4ext

// clang-format on
