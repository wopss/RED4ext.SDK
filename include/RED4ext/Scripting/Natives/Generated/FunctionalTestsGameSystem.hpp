#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsIGameSystem.hpp>

namespace RED4ext
{
struct FunctionalTestsGameSystem : FunctionalTestsIGameSystem
{
    static constexpr const char* NAME = "FunctionalTestsGameSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x120 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FunctionalTestsGameSystem, 0x120);
} // namespace RED4ext
