#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsIRuntimeSystem.hpp>

namespace RED4ext
{
struct FunctionalTestsRuntimeSystem : FunctionalTestsIRuntimeSystem
{
    static constexpr const char* NAME = "FunctionalTestsRuntimeSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FunctionalTestsRuntimeSystem, 0x88);
} // namespace RED4ext

// clang-format on
