#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInt32ValueProvider.hpp>

namespace RED4ext
{
namespace quest
{
struct Int32FixedValueProvider : quest::IInt32ValueProvider
{
    static constexpr const char* NAME = "questInt32FixedValueProvider";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(Int32FixedValueProvider, 0x38);
} // namespace quest
using questInt32FixedValueProvider = quest::Int32FixedValueProvider;
} // namespace RED4ext

// clang-format on
